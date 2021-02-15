#include "cstdio"

/*

    Lesson 3 - cpp is just java but better and harder

    ok, enough about why c++ is the most annoying thing ever made

    in this lesson, i want to show how similar C++ is to java
    but also why is it better but harder at the same time.

    the general principle here is that c++ gives you more
    control but now you have more control its harder and better

    this more control allows us to write faster software but at the cost
    of about 2000x more "what the fuck" moments.

*/

void otherFunction()
{
    printf("Hey we're up here now!\n");
}

// this is our "entry point"
// entry point is the fancy word for start of the program
// this is basically the exact same thing as the 
// "public static void main(String[] args)" in java

// now the confusing thing is why is there argc and argv?

// argc is the count of arguments, so like doing args.length
// argv is the "argument vector" which is another fancy way
// of saying array of arrays. well cover star syntax in a later
// lesson
int main(int argc, const char** argv)
{
    // basic data types, note these are signed
    bool aBoolean = false; // "1" bit, its really 8 but it behaves like 1
    char aChar = 'A'; // 8 bit
    short aShort = 6; // 16 bit
    int anInt = 13; // 32 bit
    long aLong = 63; // 64 bit

    // floating point types
    float aFloat = 6.3f; // 32 bit floating point, note the f at the end
    double aDouble = 3.4; // 64 bit floating point

    // now these are unsigned data types, this means they cant be negative
    // but now they can go to a higher number
    unsigned char uChar = 'A'; // 8 bit
    unsigned short uShort = 6; // 16 bit
    unsigned int uInt = 13; // 32 bit
    unsigned long uLong = 63; // 64 bit

    // basic logic statements
    if(false == false)
    {
        printf("True!\n");
    }
    else if(true == false)
    {
        printf("someone help you\n");
    }
    else
    {
        printf("your computer is broken m8\n");
    }

    // function calls are basically the same
    // and scope too
    otherFunction();

    // switches are the same
    switch(aShort)
    {
        // cases and fall throught is the same
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        break;
        case 6:
            printf("This should happen?.\n");
        break; 
        default:
            printf("Also default, this should not happen?.\n");     
    }

    printf("Anyway, most of the basic features are the same, everything from this point on is different\n");   

    return 0;  

}