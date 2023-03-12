#include<iostream>
using namespace std;

// /*
// BINARY OPERATOR -
 
// 1. USING CLASS */

class demo{
    int a, b;

public:
    demo() // default constructor
    {}

    demo(int x, int y)
    {
        a = x;
        b = y;
    }

    void show()
    {
        cout << "\nA : " << a << "\tB : " << b;
    }

    demo operator +(demo obj) // unary operator overloaded and no arguments passed
    {
        demo temp;
        temp.a = a + obj.a;
        temp.b = b + obj.b;
        return temp;
    }
};

int main()
{
    demo ob(5, 10), ob1(55, 7), ob2;

    ob2 = ob + ob1;

    ob2.show();
    return 0;
}

//=======================================

// method 2 using friend function-


class demo{
    int a, b;

public:
    demo() // default constructor
    {}

    demo(int x, int y)
    {
        a = x;
        b = y;
    }

    void show()
    {
        cout << "\nA : " << a << "\tB : " << b;
    }

    friend demo operator +(demo &obj,demo &obj2); // unary operator overloaded and no arguments passed
};

demo operator +(demo &obj,demo &obj2)// unary operator overloaded and no arguments passed
    {
        demo temp;
        temp.a = obj.a + obj2.a;
        temp.b = obj.b + obj2.b;
        return temp;
    }

int main()
{
    demo ob(5, 10), ob1(55, 7), ob2;

    ob2 = ob + ob1;

    ob2.show();
    return 0;
}