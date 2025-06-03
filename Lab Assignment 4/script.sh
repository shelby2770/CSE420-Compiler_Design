#!/bin/bash

# First pass: Generate AST and symbol table
win_bison -d -y --debug --verbose 23341065.y
echo 'Generated the parser C file and header file'
g++ -w -c -o y.o y.tab.c
echo 'Generated the parser object file'
win_flex 23341065.l
echo 'Generated the scanner C file'
g++ -fpermissive -w -c -o l.o lex.yy.c
echo 'Generated the scanner object file'
g++ y.o l.o -o two_pass_compiler
echo 'All ready, running the two-pass compiler...'

# Run the compiler on the input file
./two_pass_compiler input.c
echo 'Compilation completed.'

# Display output files
echo '------------ Log output ------------'
cat log.txt
echo '------------ Error output ------------'
cat error.txt
echo '------------ Three Address Code ------------'
cat code.txt
