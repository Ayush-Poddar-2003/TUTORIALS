#include<iostream>
using namespace std;

//---------------------------------------

#define PID 3.149   // constant using define

int main()
{
    int a1;  // declaration
    a1 = 15; // intialization

    int a2 = 25; // declaring and intializing at same time

// ---------------------------------------

//  Multiple Variables Declarations-

    int x1, y1, z1;
    x1 = y1 = z1 = 50;

    int x2 = 5, y2 = 6, z2 = 50;

// ---------------------------------------

//                CONSTANTS -

// use the " const " keyword (this will declare the variable as "constant")

    const float PI = 3.14;
    cout << PI;

/* OR Using #define preprocessor.

    #define NAME value ,
        - where name in caps
        - used before main() */
    
    cout << PID;

    return 0 ;

}

