@echo off
gcc -c .\data_smoothing.c -o data_smoothing.o
gcc -c  .\probe_manager_lib.c -o probe_manager_lib.o
gcc .\probe_manager_lib.o .\data_smoothing.o -o data_smoothing.exe

.\data_smoothing.exe
