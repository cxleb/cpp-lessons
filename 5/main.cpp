/*
    Lesson 5 - what is a pointer and why are they great
*/

#include <cstdio>

void modifyCheese(int cheese)
{
    cheese = 5;
}

void modifyCheese2(int* cheese)
{
    *cheese = 5;
}

int main(int argc, const char** argv)
{
    // make cheese, an int
    int cheese = 17;

    // make a useless pointer
    int* pointer;

    // now its really useless
    pointer = nullptr;

    // assign it
    pointer = &cheese;

    // print cheeese
    printf("Cheese is %d\n", cheese);

    // get the data from the pointer
    printf("Cheese is %d\n", *pointer);

    // modify cheese
    modifyCheese(cheese);

    // print cheeese
    printf("Cheese is %d\n", cheese);

    // modify cheese, the sequel
    modifyCheese2(pointer);

    // print cheeese
    printf("Cheese is %d\n", *pointer);
    
    return 0;
}