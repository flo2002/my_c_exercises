@echo off
gcc -c .\test_string_functions.c -o test_string_functions.o
gcc -c  .\string_lib.c -o string_lib.o
gcc .\string_lib.o .\test_string_functions.o -o test_string_functions.exe

.\test_string_functions.exe
