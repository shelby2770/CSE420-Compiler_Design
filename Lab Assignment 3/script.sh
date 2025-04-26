#!/bin/bash

win_bison -d -y --debug --verbose 23341065.y
echo 'Generated the parser C file as well the header file'
g++ -w -c -o y.o y.tab.c
echo 'Generated the parser object file'
win_flex 23341065.l
echo 'Generated the scanner C file'
g++ -fpermissive -w -c -o l.o lex.yy.c
# if the above command doesn't work try g++ -fpermissive -w -c -o l.o lex.yy.c
echo 'Generated the scanner object file'
g++ y.o l.o
echo 'All ready, running'
./a.exe input.c
# echo "logfile"
# cat 23341065_log.txt
