#include <iostream>
using namespace std;

/* STATIC DATA MEMBER :-

- Initialized to 0 , no other initialization is permitted whenever the fist object is created.
- "Static" keyword is used.
- Only one copy is created & shared by all objects.
- Visible everywhere in the program.

IMPORTANT : after ending of class we have to mention :

    DATATYPE CLASSNAME :: STATIC_VAR;

*/

// class demo
// {
// private:
//     int x, y;
//     static int z; // static variable declared

// public:
//     void getdata(int a, int b)
//     {
//         x = a;
//         y = b;
//         z = z + 1;
//     }

//     void showdata()
//     {
//         cout << "\nx = " << x << "\ny = " << y << "\nz = " << z;
//     }
// };

// int demo :: z ; // IMPORTANT LINE TO MAKE STATIC CODE WORK CORRECTLY !!

// int main()
// {
//     demo obj1, obj2;

//     obj1.getdata(5, 7);
//     obj1.showdata();

//     obj2.getdata(2, 9);
//     obj2.showdata();

//     return 0;
// }

/* --------------------------------------

STATIC MEMBER FUNCTION :-

- Can acess only static data members
- Since static members are not a part of single object, common for all objects it is called using class name.

SYNTAX - ClassName :: FunName();
*/

class demo2
{
private:
    int x;
    static int z; // Static data member

public:
    void getdata(int a)
    {
        x = a;
        z = z + 1;
    }

    void showdata()
    {
        cout << "\nx = " << x << "\nz = " << z;
    }

    static void myfun() // static function
    {
        // cout << x ; -> will give error as static functions only works with static members
        cout << "\nz = " << z;
    }
};

int demo2 ::z; // IMPORTANT LINE TO MAKE STATIC CODE WORK CORRECTLY

int main()
{
    demo2 aa;

    aa.getdata(10);
    aa.showdata();

    // aa.myfun(); -> will give error coz static fun aren't a part of objects

    demo2 :: myfun();

    return 0;
}