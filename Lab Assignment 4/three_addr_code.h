
#ifndef THREE_ADDR_CODE_H
#define THREE_ADDR_CODE_H

#include "ast.h"
#include <fstream>
#include <string>
#include <map>

using namespace std;

class ThreeAddrCodeGenerator {
private:
    ProgramNode* ast_root;  // The root of the AST
    ofstream& outcode;      // Output stream to write the generated code
    map<string, string> symbol_to_temp;  // Map for variable to temporary variable mapping
    int temp_count;  // Counter for temporary variable names (e.g., t0, t1, ...)
    int label_count; // Counter for labels (e.g., L0, L1, ...)

public:
    // Constructor to initialize the generator with the AST root and output stream
    ThreeAddrCodeGenerator(ProgramNode* root, ofstream& out)
        : ast_root(root), outcode(out), temp_count(0), label_count(0) {}

    // Main method to generate the three-address code
    void generate() {
        // Write a header to the output file
        outcode << "// Three-Address Code" << endl << endl;

        // Call the generate_code method of the AST root to generate the actual code
        ast_root->generate_code(outcode, symbol_to_temp, temp_count, label_count);

        // Write a footer to the output file
        outcode << "// End of Three-Address Code" << endl;
    }

    // Helper method to generate unique temporary variable names (t0, t1, t2, ...)
    string get_temp_var() {
        return "t" + to_string(temp_count++);
    }

    // Helper method to generate unique label names (L0, L1, L2, ...)
    string get_label() {
        return "L" + to_string(label_count++);
    }
};

#endif 




//     void generate() {
//         // TODO: Implement this method
//         // This method should:
//         // 1. Write a header to the output file
//         // 2. Call the generate_code method of the AST root
//         // 3. Write a footer to the output file
//     }

//     // You may add helper methods here
// };

// #endif // THREE_ADDR_CODE_H