#include <iostream>
#include "otherfile.h"

/*
    Lesson 1 - why is c++ so hard to compile
    
    each c++(*.cpp) source file turns into a object file(*.o), this is
    called a compilation unit

    on windows this is PE/COFF object file
    on linux this is a ELF object file
    and on mac no one knows

    the process of turning source into a object file is called compiling

    note, an object file does not represent a class or object within c++,
    it simply represents a c++ source file and all its code

    now we have a series of object files, how do we turn them into an
    executable file?

    we invoke something called the linker, which does the hard part of taking
    all our object files, calculating the addresses for all our functions,
    adds any neccesary garbage and outputs an exe.

    you can see in our project we have 2 c++ source files, main.cpp and 
    otherfile.cpp, these get turned into main.o and otherfile.o, then 
    these get linked into lesson1.exe(on windows)

    conviently, on windows, cl(compile and link, i think) does this whole
    process for us.
*/


int main(int argc, char** argv)
{
    otherFunction();

    return 0;
}