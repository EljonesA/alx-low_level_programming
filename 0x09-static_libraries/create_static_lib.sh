#!/bin/bash

# compile all .c files into object files
gcc -c *.c

# create static library from object files
ar -rc liball.a *.o
