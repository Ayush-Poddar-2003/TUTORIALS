#include <iostream>
using namespace std;

/*

If a derived class have two base class, and each base class has function with same name, then if we call that function - there will be ambiguity
To solve this we call function inside derived class using class name as below

*/

class A
{
protected:
    int a;

public:
    void input()
    {
        cout << "Enter value of a: ";
        cin >> a;
    }
    void output()
    {
        cout << "\na : " << a;
    }
};

class B
{
protected:
    int b;

public:
    void input()
    {
        cout << "Enter value of b: ";
        cin >> b;
    }
    void show()
    {
        cout << "\nb : " << b;
    }
};

class C : public A, public B
{
    int c;

public:
    void getdata()
    {
        cout << "Enter value of c: ";
        cin >> c;

        A ::input();
        B ::input();
    }
    void display()
    {
        cout << "\nc : " << c;
    }
};

int main()
{
    C obj;

    //  obj.input(); //which function will be called
    obj.getdata();
    obj.output();
    obj.show();
    obj.display();

}