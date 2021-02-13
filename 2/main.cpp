#include <iostream>
#include "otherfile.h"

/*
    Lesson 2 - what is a header file and why the fuck do they exist

    Header files are annoying there is no way to put it

    theyre essentially an artifact of the build process outlined
    in the previous lesson. C++ is a statically typed languaged
    meaning it has to know a function, variable, etc exists before
    it can completely compile and link the C++ program, because we
    compile each file one by one we need to have a reference of all
    the functions, variables and other thing that will exist in other
    files.

    for example

    main.cpp has the main function
    otherfile.cpp has funcA and funcB

    how does main.cpp know funcA and funcB are a thing and not a typo

    we have otherfile.h which has funcA and funcB function signature
    which is essentially the function without a body. this is how the
    compiler knows the function exists somewhere else.

    what happens if you lie to the compiler? in other words, what happens
    if you have a function signature that is incorrect or doesnt resolve
    to a function in a header file?

    well the compiler is going to say "call this function pls" and its going
    to behave like everything is ok. then when we try to link the files
    together its going to say "hold up, you wanted this function but it doesnt
    exist" and so the linker will spit out a bunch of confusing errors.
    generally when the linker throws errors it means you typed something
    wrong in a header or didnt include an object file with all your function
    bodies.

    in short, header files are very important and are very annoying since theyre
    the cause of most pain in c++. many people have tried to design languages
    the get rid of header files(java, c#, go, rust, i even tried to make my
    own called emble) to combat this but theyre simply not as powerful or as
    widespread as c++ and have as much code base.

*/

/*

    Extra things to note about header files, fun....

    you can include them more then once? what?

    say you have two header files apple.h and banana.h, they both need header file
    fruit.h, and then you have a cpp file called, eat.cpp. In eat.cpp you include 
    apple.h and banana.h, then you compile and all of a sudden you see an error like
    "class fruit was already defined in fruit.h" and your like what???. this is because
    you included fruit.h twice in your code, once in banana.h and apple.h

    how the f to do we get around this. easy. sort of
    
    modern method(this is common for msvc(windows), not so much on gcc(linux/windows/mac))
        put #pragma once at the beginning of your file

    c style method
        #ifndef _FRUIT_H_
        #define _FRUIT_H_

            // your header code goes here

        #endif

    well cover what this all means in lesson 4

    this also raises another problem called circular inclusion/depedencies, but well
    talk about that later too
*/


int main(int argc, char** argv)
{
    funcA(1);
    funcB("where r u funcB?");

    return 0;
}