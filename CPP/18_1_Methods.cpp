#include <iostream>
using namespace std;

/*----------------- Class Methods ----------------------

- Methods are alias name of functions which are created insids a class.
- It operates on any object of class and has access to all the members of a class.

There are two ways to define these methods :

    1. Inside class definition
    2. Outside class definition


----------------------- INSIDE -----------------------*/

class MyClass
{
public:           // Access specifier
    void inside() // Method/function defined inside the class
    {
        cout << "Hello World!";
    }
};

/*-------------------- OUTSIDE ------------------------

- For outside, declare it 'INSIDE' the class and then DEFINE it outside of the class  */

class MyClass2
{
public:
    void outside(); // Method/function declaration
};

void MyClass2 ::outside() // RETURN CLASS_NAME :: FUNCTION_NAME {}
{
    cout << "Hello World!";
}

// lets use objects to call both of them -

int main()
{
    MyClass myObj;  // Create an object for inside
    myObj.inside(); // Calling it

    MyClass2 myObj2;  // Create an object for outside
    myObj2.outside(); // Call the method

    return 0;
}
