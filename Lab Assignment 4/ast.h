#ifndef AST_H
#define AST_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <map>
#include "symbol_info.h"  // Include symbol information header for linking symbols

using namespace std;

class ASTNode {
public:
    virtual ~ASTNode() {} // Destructor for cleaning up when deleting an object
    // Pure virtual function that all derived classes need to implement
    virtual string generate_code(ofstream& outcode, map<string, string>& symbol_to_temp, int& temp_count, int& label_count) const = 0;
};
//virtual => override
// outcode: A reference to a file stream where the generated code will be written.
// symbol_to_temp: translate variable names to temporary variables used in the intermediate code.
// temp_count: create unique temporary variable names  t0, t1, 
// label_count: create unique label names for control flow  L0, L1
// Expression node types
// Expression node types

class ExprNode : public ASTNode {
protected:
    string node_type; //Type information (int, float, void, etc.)
public:
    ExprNode(string type) : node_type(type) {}
    virtual string get_type() const { return node_type; }
};

// Variable node (for ID references)

class VarNode : public ExprNode {
private:
    string name;// Variable name like 'a'
    ExprNode* index; // For arrays like 'a[i]'For array access, nullptr for simple variables

public:
    VarNode(string name, string type, ExprNode* idx = nullptr)
        : ExprNode(type), name(name), index(idx) {}
    
    ~VarNode() { if(index) delete index; }
    
    bool has_index() const { return index != nullptr; }
    
    string generate_index_code(ofstream& outcode, map<string, string>& symbol_to_temp,
                              int& temp_count, int& label_count) const {
        // TODO: Implement this method
        // Should generate code to calculate the array index and return the temp variable

        // Ensure the index is valid                                       // // // // // // // // 
        if (index) {
            string index_code = index->generate_code(outcode, symbol_to_temp, temp_count, label_count);
            string temp_var = "t" + to_string(temp_count++);
            
            // Output the code for calculating the index
            outcode << temp_var << " = " << index_code << endl;
            
            return temp_var; // Return the temporary variable holding the index
        }
        return ""; // Return empty string if no index exists

    
    }
    
    string generate_code(ofstream& outcode, map<string, string>& symbol_to_temp,
                        int& temp_count, int& label_count) const override {
        // TODO: Implement this method
        // Should generate code for variable access or array access

        // // // // // // // // 

        string temp_var;
        
        if (has_index()) {
            // Generate code to calculate array index
            string index_temp = generate_index_code(outcode, symbol_to_temp, temp_count, label_count);
            temp_var = "t" + to_string(temp_count++);
            
            // Assuming we are accessing an array, generate code for the array access
            outcode << temp_var << " = " << name << "[" << index_temp << "]" << endl;
        } else {
            // Regular variable access
            // For simplicity, use a temp variable even for simple variables
            temp_var = "t" + to_string(temp_count++);
            outcode << temp_var << " = " << name << endl;
        }
        
        return temp_var; // Return the temp variable that holds the value
    }
    
    string get_name() const { return name; }
};

// Constant node

class ConstNode : public ExprNode {
    private:
        string value;
    
    public:
        ConstNode(string val, string type) : ExprNode(type), value(val) {}
        
        string generate_code(ofstream& outcode, map<string, string>& symbol_to_temp,
                            int& temp_count, int& label_count) const override {
            // TODO: Implement this method
            // Should generate code for constant values 

              // Since constants do not require calculation, we simply return their value.   // // // // // // // // 
        // We can use temporary variables if necessary to represent constants in intermediate code.
        string temp_var = "t" + to_string(temp_count++);
        outcode << temp_var << " = " << value << endl;
        return temp_var; // Return the temporary variable holding the constant value

        }
    };

// Binary operation node

class BinaryOpNode : public ExprNode {
private:
    string op;
    ExprNode* left;
    ExprNode* right;

public:
    BinaryOpNode(string op, ExprNode* left, ExprNode* right, string result_type)
        : ExprNode(result_type), op(op), left(left), right(right) {}
    
    ~BinaryOpNode() {
        delete left;
        delete right;
    }
    
    string generate_code(ofstream& outcode, map<string, string>& symbol_to_temp,
                        int& temp_count, int& label_count) const override {
        // TODO: Implement this method
        // Should generate code for binary operations


        // Generate code for the left operand    // // // // // // // // 
        string left_temp = left->generate_code(outcode, symbol_to_temp, temp_count, label_count);

        // Generate code for the right operand
        string right_temp = right->generate_code(outcode, symbol_to_temp, temp_count, label_count);

        // Create a new temporary variable for the result of the operation
        string result_temp = "t" + to_string(temp_count++);

        // Generate the intermediate code for the binary operation
        outcode << result_temp << " = " << left_temp << " " << op << " " << right_temp << endl;

        return result_temp; // Return the temporary variable holding the result



       
    }
};

// Unary operation node

class UnaryOpNode : public ExprNode {
private:
    string op;
    ExprNode* expr;

public:
    UnaryOpNode(string op, ExprNode* expr, string result_type)
        : ExprNode(result_type), op(op), expr(expr) {}
    
    ~UnaryOpNode() { delete expr; }
    
    string generate_code(ofstream& outcode, map<string, string>& symbol_to_temp,
                        int& temp_count, int& label_count) const override {
        // TODO: Implement this method
        // Should generate code for unary operations 

        // Generate code for the operand (expr) // // // // // // // // 
        string expr_temp = expr->generate_code(outcode, symbol_to_temp, temp_count, label_count);

        // Create a new temporary variable for the result of the unary operation
        string result_temp = "t" + to_string(temp_count++);

        // Generate the intermediate code for the unary operation
        outcode << result_temp << " = " << op << " " << expr_temp << endl;

        return result_temp; // Return the temporary variable holding the result
    



    }
};

// Assignment node

class AssignNode : public ExprNode {
private:
    VarNode* lhs;
    ExprNode* rhs;

public:
    AssignNode(VarNode* lhs, ExprNode* rhs, string result_type)
        : ExprNode(result_type), lhs(lhs), rhs(rhs) {}
    
    ~AssignNode() {
        delete lhs;
        delete rhs;
    }
    
    string generate_code(ofstream& outcode, map<string, string>& symbol_to_temp,
                        int& temp_count, int& label_count) const override {
        // Generate code for the right-hand side (rhs) expression
        string rhs_temp = rhs->generate_code(outcode, symbol_to_temp, temp_count, label_count);

        // For array assignments, we need to handle the index
        if (lhs->has_index()) {
            string index_temp = lhs->generate_index_code(outcode, symbol_to_temp, temp_count, label_count);
            
            // Generate array assignment code
            outcode << lhs->get_name() << "[" << index_temp << "] = " << rhs_temp << endl;
            
            // Use a temp variable to represent the result of the assignment
            string result_temp = "t" + to_string(temp_count++);
            outcode << result_temp << " = " << rhs_temp << endl;
            return result_temp;
        } else {
            // Regular variable assignment
            outcode << lhs->get_name() << " = " << rhs_temp << endl;
            
            // Return the right-hand side value (which is now also the variable's value)
            return rhs_temp;
        }
    }
};

// Statement node types

class StmtNode : public ASTNode {
public:
    virtual string generate_code(ofstream& outcode, map<string, string>& symbol_to_temp,
                                int& temp_count, int& label_count) const = 0;
};

// Expression statement node

class ExprStmtNode : public StmtNode {
private:
    ExprNode* expr;

public:
    ExprStmtNode(ExprNode* e) : expr(e) {}
    ~ExprStmtNode() { if(expr) delete expr; }
    
    string generate_code(ofstream& outcode, map<string, string>& symbol_to_temp,
                        int& temp_count, int& label_count) const override {
        // TODO: Implement this method
        // Should generate code for expression statements 

        // Generate code for the expression in the statement
        if (expr) {
            string expr_temp = expr->generate_code(outcode, symbol_to_temp, temp_count, label_count);
            outcode << "// Expression statement result: " << expr_temp << endl;
            return expr_temp;
        }
        return "";
    }
};

// Block (compound statement) node

class BlockNode : public StmtNode {
private:
    vector<StmtNode*> statements;

public:
    ~BlockNode() {
        for (auto stmt : statements) {
            delete stmt;
        }
    }
    
    void add_statement(StmtNode* stmt) {
        if (stmt) statements.push_back(stmt);
    }
    
    string generate_code(ofstream& outcode, map<string, string>& symbol_to_temp,
                        int& temp_count, int& label_count) const override {
        // TODO: Implement this method
        // Should generate code for all statements in the block 

        string last_result = "";
        
        // Generate code for each statement in the block
        for (auto stmt : statements) {
            last_result = stmt->generate_code(outcode, symbol_to_temp, temp_count, label_count);
        }
    
        return last_result; // Return result of the last statement executed
    }
};

// If statement node

class IfNode : public StmtNode {
private:
    ExprNode* condition;
    StmtNode* then_block;
    StmtNode* else_block; // nullptr if no else part

public:
    IfNode(ExprNode* cond, StmtNode* then_stmt, StmtNode* else_stmt = nullptr)
        : condition(cond), then_block(then_stmt), else_block(else_stmt) {}
    
    ~IfNode() {
        delete condition;
        delete then_block;
        if (else_block) delete else_block;
    }
    
    string generate_code(ofstream& outcode, map<string, string>& symbol_to_temp,
                        int& temp_count, int& label_count) const override {
        // TODO: Implement this method
        // Should generate code for if-else statements 

        // Generate the condition code (e.g., evaluate the expression)    // // // // // // // // //
        string condition_temp = condition->generate_code(outcode, symbol_to_temp, temp_count, label_count);
        
        // Generate unique labels for control flow
        string true_label = "L" + to_string(label_count++);
        string false_label = "L" + to_string(label_count++);
        string end_label = "L" + to_string(label_count++);

        // Generate the conditional jump code
        outcode << "if " << condition_temp << " goto " << true_label << endl;
        outcode << "goto " << false_label << endl;

        // Generate code for the "then" block
        outcode << true_label << ":" << endl;
        if (then_block) {
            then_block->generate_code(outcode, symbol_to_temp, temp_count, label_count);
        }

        // If there is an "else" block, add the jump to the end and generate the "else" block code
        outcode << "goto " << end_label << endl;

        // Generate code for the "else" block
        outcode << false_label << ":" << endl;
        if (else_block) {
            else_block->generate_code(outcode, symbol_to_temp, temp_count, label_count);
        }

        // End of the "if-else" block
        outcode << end_label << ":" << endl;

        return "";  // No temporary variable is returned for the "if" statement

    }
};

// While statement node

class WhileNode : public StmtNode {
private:
    ExprNode* condition;
    StmtNode* body;

public:
    WhileNode(ExprNode* cond, StmtNode* body_stmt)
        : condition(cond), body(body_stmt) {}
    
    ~WhileNode() {
        delete condition;
        delete body;
    }
    
    string generate_code(ofstream& outcode, map<string, string>& symbol_to_temp,
                        int& temp_count, int& label_count) const override {
        // TODO: Implement this method
        // Should generate code for while loops

        // Generate labels for the loop    // // // // // // // //
        // Generate labels for the loop
        string cond_label = "L" + to_string(label_count++);
        string body_label = "L" + to_string(label_count++);
        string end_label = "L" + to_string(label_count++);

        // Start of the loop - check condition
        outcode << cond_label << ":" << endl;
        string condition_temp = condition->generate_code(outcode, symbol_to_temp, temp_count, label_count);
        
        // If condition is true, go to body, otherwise exit loop
        outcode << "if " << condition_temp << " goto " << body_label << endl;
        outcode << "goto " << end_label << endl;

        // Generate the body of the loop
        outcode << body_label << ":" << endl;
        if (body) {
            body->generate_code(outcode, symbol_to_temp, temp_count, label_count);
        }
        
        // Jump back to the condition check
        outcode << "goto " << cond_label << endl;

        // End of the loop
        outcode << end_label << ":" << endl;

        return "";  // No specific value is returned for control flow statements
    }
};

// For statement node

class ForNode : public StmtNode {
private:
    ExprNode* init;
    ExprNode* condition;
    ExprNode* update;
    StmtNode* body;

public:
    ForNode(ExprNode* init_expr, ExprNode* cond_expr, ExprNode* update_expr, StmtNode* body_stmt)
        : init(init_expr), condition(cond_expr), update(update_expr), body(body_stmt) {}
    
    ~ForNode() {
        if (init) delete init;
        if (condition) delete condition;
        if (update) delete update;
        delete body;
    }
    
    string generate_code(ofstream& outcode, map<string, string>& symbol_to_temp,
                        int& temp_count, int& label_count) const override {
        // TODO: Implement this method
        // Should generate code for for loops 

        // Generate labels for the for loop   // // // // // // // //
        // Generate labels for the for loop
        string cond_label = "L" + to_string(label_count++);
        string body_label = "L" + to_string(label_count++);
        string update_label = "L" + to_string(label_count++);
        string end_label = "L" + to_string(label_count++);

        // Generate code for initialization (e.g., int i = 0;)
        if (init) {
            init->generate_code(outcode, symbol_to_temp, temp_count, label_count);
        }

        // Generate the loop condition check
        outcode << cond_label << ":" << endl;
        if (condition) {
            string condition_temp = condition->generate_code(outcode, symbol_to_temp, temp_count, label_count);
            outcode << "if " << condition_temp << " goto " << body_label << endl;
            outcode << "goto " << end_label << endl;
        } else {
            // If no condition is provided, it's treated as always true
            outcode << "goto " << body_label << endl;
        }

        // Generate the body of the loop
        outcode << body_label << ":" << endl;
        if (body) {
            body->generate_code(outcode, symbol_to_temp, temp_count, label_count);
        }

        // Generate the update expression (e.g., i++)
        outcode << update_label << ":" << endl;
        if (update) {
            update->generate_code(outcode, symbol_to_temp, temp_count, label_count);
        }

        // Jump back to the condition check
        outcode << "goto " << cond_label << endl;

        // End of the loop
        outcode << end_label << ":" << endl;

        return "";  // No specific value is returned for control flow statements
    }
};

// Return statement node

class ReturnNode : public StmtNode {
private:
    ExprNode* expr;

public:
    ReturnNode(ExprNode* e) : expr(e) {}
    ~ReturnNode() { if (expr) delete expr; }
    
    string generate_code(ofstream& outcode, map<string, string>& symbol_to_temp,
                        int& temp_count, int& label_count) const override {
        // TODO: Implement this method
        // Should generate code for return statements 

        string return_temp = "";    // // // // // // // //
        
        // If the return statement has an expression, generate code for it
        if (expr) {
            return_temp = expr->generate_code(outcode, symbol_to_temp, temp_count, label_count);
            // Generate the return code for the function (e.g., return t1;)
            outcode << "return " << return_temp << endl;
        } else {
            // If the function has a void return type, just return without an expression
            outcode << "return" << endl;
        }

        return "";  // Return nothing as it's a control flow statement


    
    }
};

// Declaration node

class DeclNode : public StmtNode {
private:
    string type;
    vector<pair<string, int>> vars; // Variable name and array size (0 for regular vars)

public:
    DeclNode(string t) : type(t) {}
    
    void add_var(string name, int array_size = 0) {
        vars.push_back(make_pair(name, array_size));
    }
    
    string generate_code(ofstream& outcode, map<string, string>& symbol_to_temp,
                        int& temp_count, int& label_count) const override {
        // TODO: Implement this method
        // Should generate code for variable declarations

          // // // // // // // //

        // Generate code for each variable
        for (const auto& var : vars) {
            const string& var_name = var.first;
            int array_size = var.second;

            if (array_size == 0) {
                // Regular variable declaration
                outcode << "// Declaration: " << type << " " << var_name << endl;
            } else {
                // Array declaration
                outcode << "// Declaration: " << type << " " << var_name << "[" << array_size << "]" << endl;
            }
        }

        return "";  // No specific value is returned for declarations
    }
    
    string get_type() const { return type; }
    const vector<pair<string, int>>& get_vars() const { return vars; }
};

// Function declaration node

class FuncDeclNode : public ASTNode {
private:
    string return_type;
    string name;
    vector<pair<string, string>> params; // Parameter type and name
    BlockNode* body;

public:
    FuncDeclNode(string ret_type, string n) : return_type(ret_type), name(n), body(nullptr) {}
    ~FuncDeclNode() { if (body) delete body; }
    
    void add_param(string type, string name) {
        params.push_back(make_pair(type, name));
    }
    
    void set_body(BlockNode* b) {
        body = b;
    }
    
    string generate_code(ofstream& outcode, map<string, string>& symbol_to_temp,
                        int& temp_count, int& label_count) const override {
        // TODO: Implement this method
        // Should generate code for function declarations

        // Start with the function signature  // // // // // // // //
        // Function signature
        outcode << "// Function: " << return_type << " " << name << "(";
        
        // Parameters
        for (size_t i = 0; i < params.size(); ++i) {
            const auto& param = params[i];
            outcode << param.first << " " << param.second;
            if (i != params.size() - 1) {
                outcode << ", ";
            }
        }
        outcode << ")" << endl;
        
        outcode << "function " << name << " begins" << endl;

        // Generate the function body if it exists
        if (body) {
            body->generate_code(outcode, symbol_to_temp, temp_count, label_count);
        }

        outcode << "function " << name << " ends" << endl;
        outcode << endl;

        return "";  // No specific value is returned for function declarations
    }
};

// Helper class for function arguments

class ArgumentsNode : public ASTNode {
private:
    vector<ExprNode*> args;

public:
    ~ArgumentsNode() {
        // Don't delete args here - they'll be transferred to FuncCallNode
    }
    
    void add_argument(ExprNode* arg) {
        if (arg) args.push_back(arg);
    }
    
    ExprNode* get_argument(int index) const {
        if (index >= 0 && index < args.size()) {
            return args[index];
        }
        return nullptr;
    }
    
    size_t size() const {
        return args.size();
    }
    
    const vector<ExprNode*>& get_arguments() const {
        return args;
    }
    
    string generate_code(ofstream& outcode, map<string, string>& symbol_to_temp,
                        int& temp_count, int& label_count) const override {
        // This node doesn't generate code directly
        return "";
    }
};

// Function call node

class FuncCallNode : public ExprNode {
private:
    string func_name;
    vector<ExprNode*> arguments;

public:
    FuncCallNode(string name, string result_type)
        : ExprNode(result_type), func_name(name) {}
    
    ~FuncCallNode() {
        for (auto arg : arguments) {
            delete arg;
        }
    }
    
    void add_argument(ExprNode* arg) {
        if (arg) arguments.push_back(arg);
    }
    
    string generate_code(ofstream& outcode, map<string, string>& symbol_to_temp,
                        int& temp_count, int& label_count) const override {
        // TODO: Implement this method
        // Should generate code for function calls
        
        // Generate code for each argument  // // // // // // // //
        vector<string> arg_temps;
        for (const auto& arg : arguments) {
            string arg_temp = arg->generate_code(outcode, symbol_to_temp, temp_count, label_count);
            arg_temps.push_back(arg_temp);
        }

        // Generate param statements for function arguments
        for (size_t i = 0; i < arg_temps.size(); ++i) {
            outcode << "param " << arg_temps[i] << endl;
        }

        // Function call
        string result_temp = "";
        if (get_type() != "void") {
            result_temp = "t" + to_string(temp_count++);
            outcode << result_temp << " = call " << func_name << ", " << arg_temps.size() << endl;
        } else {
            outcode << "call " << func_name << ", " << arg_temps.size() << endl;
        }

        return result_temp;  // Return the temporary variable holding the result, if any
    }
};

// Program node (root of AST)
// Purpose: Represents the entire program. It’s the root of the AST.
class ProgramNode : public ASTNode {
private:
    vector<ASTNode*> units;

public:
    ~ProgramNode() {
        for (auto unit : units) {
            delete unit;// Clean up all units (functions, variables)
        }
    }
    
    void add_unit(ASTNode* unit) {
        if (unit) units.push_back(unit);
    }
    
    string generate_code(ofstream& outcode, map<string, string>& symbol_to_temp,
                        int& temp_count, int& label_count) const override {
        // TODO: Implement this method
        // Should generate code for the entire program

        // The program code is generated by iterating over each unit (function, declaration, etc.)  // // // // // // // //
        outcode << "// Intermediate Code Generation" << endl;
        outcode << "// =========================" << endl << endl;

        // Generate code for each program unit
        for (const auto& unit : units) {
            unit->generate_code(outcode, symbol_to_temp, temp_count, label_count);
            outcode << endl;
        }

        return "";  // No specific value is returned for the program
    }
};

#endif // AST_H
