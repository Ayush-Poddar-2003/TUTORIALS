#include <iostream>
#include <string>
using namespace std;

/*

CONSTRUCTOR CHARACTERISTICS :-
- A special function, called automatically at the time of object creation.
- Main use is to initialize the data members.
- The constructor has the same name as the class.
- Don't have a return type.
- Always defined under public section

TYPES :-

1.  DEFAULT :
    - A constructor with no arguments is called default constructor.
    - If we don't create any constructor, by default a constructor is automatically made
      which initializes garbage value to the variables !!

2.  PARAMETERIZED CONSTRUCTOR :
    - A constructor having parameters is called parametrized constructor


//------------------------------------------*/

class construct
{
public:
    int a, b, x, y;

    construct()
    { // Default Constructor
        a = 10;
        b = 20;
    }

    construct(int x1, int y1)
    { // Parameterized Constructor
        x = x1;
        y = y1;
    }
};

int main()
{
    construct obj1; // Default constructor called automaticallY when the object is created
    cout << "a: " << obj1.a << "\n"
         << "b: " << obj1.b << endl;

    construct obj2(10, 15); // Parametrized Constructor called
    cout << "x: " << obj1.x << "\n"
         << "y: " << obj1.y << endl;

    return 0;
}

/*---------------------------------------------------------

3.  COPY CONSTRUCTOR:
    - A default or parameterized constructor prior is mandatary to use copy constructor
    - When we need to initialize the variable of an object with the value of variables of another object of same   class , copy constructor is used !!!*/

class A
{
public:
    int x;
    A(int a) // parameterized constructor.
    {
        x = a;
    }
    A(A &i) // copy constructor
    {
        x = i.x;
    }
};
int main()
{
    A a1(20); // Calling the parameterized constructor.
    A a2(a1); //  Calling the copy constructor.
//or A a2=a1

    cout << a2.x;
    return 0;
}
