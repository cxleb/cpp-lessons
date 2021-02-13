#include "cstdint"

/*

    Lesson 4 - data types? why do they mean nothing?

    ok, so now we covered simple c++ and hows its similar, we covered
    why c++ is a pain to compile and write headers for.

    Now lets get into some history.

    PREPROCESSORS, love em or hate the, theyre a cool feature of c++.
    the idea with a preprocessor is it is a special bit of code that
    changes the way c++ works.

    what? i know what your thinking zoe

    so we have been using some preprocessors already

    #include - includes a file into your compilation unit, doesnt have to 
            be a header file
    #pragma - compiler directive, can be used for a bunch of stuff, commonly
            used to stop multi file inclusion

    they all start with a hashtag and they do some funky stuff

    like? 

    change the name of data types, or anything for that matter

    remove entire sections of code, useful for cross-platform code
    
    or include entire sections of code

        note: this code is actually removed from the compiler, it isnt compiler
*/

// lets start with some weird stuff
#define smallboy int
#define bigboy long

void main(int argc, const char** argv)
{
    // try doing this in java
    smallboy what = 2;
    bigboy excuseMe = 2;

    // obviously this is stupid, but it can be used for more useful naming of variables

    uint32_t uInt = 2; // 32 bit unsigned integer
    int64_t uLong = 3; // 64 bit signed integer

    // now in the previous example, i lied, there is no way to guarantee that a `long` is actually
    // 64 bits. so we have the stdint.h or for c++ cstdint 
}