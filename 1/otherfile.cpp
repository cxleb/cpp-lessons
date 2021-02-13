#include "otherfile.h"
#include <iostream>

void otherFunction()
{
    // things to note about std library cout, this is how we interact with streams in c++
    // std::cout is a stream to the stdout file(which is console output)
    // this is the "correct way" to do console out, however many people dont like this
    // syntax, including myself, i prefer the c style of file interaction.
    std::cout << "Hello, World!" << std::endl;

    // this is the "c style" of doing things, it is valid in C++ but some people might freak out
    // you may also feel more comfortable doing this as this "c style" has been adopted across
    // many other languages
    printf("Hello, World!\n");
}   