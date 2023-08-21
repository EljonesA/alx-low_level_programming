#!/bin/bash

#convert source files(.c) into object files(.o)
gcc -c -fPIC *.c

#create dynamic library using the object files
gcc -shared -o liball.so *.o
