#!/bin/bash

mkdir ../build
mkdir ../build/bin


#Don't Use These, These are for intermediate steps
clang++ -E main.cpp > main.ipp
clang++ -S main.cpp

#These are the usual routines for compiling
clang++ -c main.cpp
clang++ -o TheExecutable main.o

