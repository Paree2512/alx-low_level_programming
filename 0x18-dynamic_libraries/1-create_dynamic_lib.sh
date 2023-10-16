#!/bin/bash

# Compile all .c files in the current directory into object files
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
# Create a dynamic library liball.so from the object files
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
