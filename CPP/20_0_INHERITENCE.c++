#include <iostream>
#include <string>

using namespace std;

/*

♥ INHERITENCE :-
- The procedure of creating a new class from one or more existing classes.
- The base class is also called super-class/parent/ancestor & the derived class is called subclass/child/descendent.
- The programmer can define new member variables and functions in the derived class.
- The properties of the existing classes are extended to the new classes.
- The object of the derived class can access members of the base and derived classes.
- On the other hand, the object of the base class cannot access members of the derived classes.

- It is also possible to derive a class from a previously derived class.
- Also A class can be derived from more than one class.

//---------------------------------------

♥ Important points
- When a public access specifier is used, the public members of the base class are public members of the derived class.
- Similarly, the protected members of the base class are protected members of the derived class.
- When a private access specifier is used, the public and protected members of the
base class are the private members of the derived class.*/


/*---------------------------------------

♥ PUBLIC INHERITENCE ♥
- When a class is derived publicly, all the public members of the base class can be accessed directly in the derived class. */

// class A // BASE CLASS
// {
// private:
//     int x;

// public:
//     A()
//     {
//         x = 20;
//     }
//     void showx()
//     {
//         cout << "\n x =" << x;
//     }
// };

// class B : public A // DERIVED CLASS
// {
// public:
//     int y;
//     B()
//     {
//         y = 30;
//     }
//     void showy()
//     {
//         showx();
//         cout << "\n y =" << y;
//     }
// };

// int main()
// {
//     B b; // DECLARATION OF OBJECT
//     b.showy();
//     return 0;
// }

/*---------------------------------------
♥ PRIVATE INHERITANCE
- The objects of the privately derived class cannot access the public members of the base class directly.
- Hence, the member functions are used to access the members */

class A // BASE CLASS
{
public:
    int x;
};

class B : private A // DERIVED CLASS
{
public:
    int y;
    B()
    {
        x = 20;
        y = 40;
    }
    void show()
    {
        cout <<"\n x ="<< x;
        cout <<"\n y ="<< y;
    }
};
int main()
{
    B b; // DECLARATION OF OBJECT
    b.show();
    return 0;
}
