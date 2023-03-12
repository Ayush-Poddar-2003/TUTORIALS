#include <iostream>
using namespace std;

/*

C++ Operators Overloading

Operator overloading is a compile-time polymorphism in which the operator is overloaded.
Operator overloading is used to overload or redefines most of the operators available in C++.
It is used to perform the operation on the user-defined data type.

The advantage of Operators overloading is to perform different operations on the same operand.

Operator that cannot be overloaded are as follows:
    Scope operator (::)
    Sizeof
    member selector(.)
    member pointer selector(*)
    ternary operator(?:)



Rules for Operator Overloading
- Existing operators can only be overloaded, but the new operators cannot be overloaded.
- The overloaded operator contains atleast one operand of the user-defined data type.
- We cannot use friend function to overload certain operators.
  However, the member function can be used to overload those operators.

UNARY OPERATORS
- When unary operators are overloaded through a member function take no explicit arguments,
  but, if they are overloaded by a friend function, takes one argument.*/

// Method 1
class demo
{
    int a, b;

public:
    demo(int x, int y)
    {
        a = x;
        b = y;
    }

    void show()
    {
        cout << "\nA : " << a << "\tB : " << b;
    }

    void operator-() // unary operator overloaded and no arguments passed
    {
        a = -a;
        b = -b;
    }
};

int main()
{
    demo ob(5, 10);
    ob.show();
    -ob;
    ob.show();
    return 0;
}

//---------------------------------------
// method 2 using friend function

// Method 1
class demo
{
    int a, b;

public:
    demo(int x, int y)
    {
        a = x;
        b = y;
    }

    void show()
    {
        cout << "A" << a << "B" << b;
    }

    friend void operator-(demo &obj); // unary operator overloaded and no arguments passed
};

void operator-(demo &obj)
{
    obj.a = -obj.a;
    obj.b = -obj.b;
}

int main()
{
    demo ob(5, 10);
    ob.show();
    -ob;
    ob.show();
}

