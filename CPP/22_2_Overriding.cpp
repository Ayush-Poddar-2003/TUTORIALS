#include <iostream>
using namespace std;

/*

METHOD/FUNCTION OVERRIDING :-

Suppose we have two classes having same named function with same arguments ,
if an object of derived class is created , obviosuly function of derived class will be called
hence function of derived class overrides the base class function

*/

// SOLUTION 1 : Call base function from derived function

class A
{
public:
    void display()
    {
        cout << "\nbase class function";
    }
};

class B : public A
{
public:
    void display()
    {
        cout << "\nderived class function";
        A :: display();     // METHOD 1 Calling it from derived class
    }
};

int main()
{
    B obj;
    obj.display();

    //METHOD 2
    obj.A::display();
}