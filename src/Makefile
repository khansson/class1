# Integrated Makefile for the MONACO software system.
# Uses file "Makefile.arch" for system specific declarations
#
# Last modified April 28, 2004

SHELL = /bin/sh

# Necessary directories
# MONACOHOME should be an environment variable indicating the top
# of the monaco distribution tree. 
BASEDIR=$(PWD)

BINDIR = $(BASEDIR)/../buid/bin
SRCDIR = $(BASEDIR)

CC=clang
CXX=clang++



PROGNAME = TheExecutable



# Targets...

default : TheExecutable

TARGETS = main.cpp
OBJS      = $(TARGETS:.cpp=.o)
# Make the monaco executable and all utilities
#all :  monaco oxford util

#-lboost;

%.o: %.cpp
	$(CXX) -c -o $@ $< 


TheExecutable : $(OBJS)
	$(CXX) -o $(PROGNAME) $(OBJS) -lm;
	rm $(SRCDIR)/*.o
	

# Cleanup options

# Remove object files from directories related to monaco executable
clean : 



# Remove all object files, libraries and executables from entire directory tree
# Basically resets to the original monaco distribution state
distclean : clean
	cd $(BINDIR); /bin/rm -f *

# DO NOT DELETE
