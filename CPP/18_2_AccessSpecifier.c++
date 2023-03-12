#include <iostream>
using namespace std;

/*--------------- Access Specifiers ---------------------

In C++, there are 3 access specifiers:

1.  Public :
    - Accessible from anywhere - outside the class BUT within a program.

2.  Private :
    - By default all the members of a class are private.
    - Members cannot be accessed or viewed from outside the class directly.
    - Only the friend and member functions(within same class) can access private members.
    - Practically, we define data in private & functions in public.

3.  Protected :
    - Very similar to a private but can be accessed via derived classes **inheritance**

---------------------------------------*/

class Public
{
public:
    int length;

public:
    void setLength(int l)
    {
        length = l;
    }

    int getLength(void)
    {
        return length;
    }
};

int main()
{
    Public obj1;

    obj1.length = 10;   // setting variable value directly
    cout << obj1.length << endl;

    obj1.setLength(10); // setting variable value using function
    cout << obj1.getLength() << endl;

return 0;
}

// --------------------------------------

class Private
{
private:
    int cost;

public:
    void setCost(int c)
    {
        cost = c;
    }

    int getCost(void)
    {
        return cost;
    }
};

int main()
{
    Private obj2;

    // obj2.cost = 10 ; // ERROR AS COST IS PRIVATE
    // cout<<obj2.cost;

    obj2.setCost(10);
    cout << obj2.getCost() << endl;
return 0;
}

//---------------------------------------

class Protected
{
protected:
    int width;
};

class Derived : Protected
{
public:
    int setWidth(int w)
    {
        width = w;
    }

    int getWidth(void)
    {
        return width;
    }
};

int main()
{
    Derived obj3;

    // obj3.width = 10 ; // ERROR AS IT'S PROTECTED
    // cout<<obj3.width; // ERROR AS IT'S PROTECTED

    obj3.setWidth(5);
    cout << obj3.getWidth() << endl;

    return 0;
}
