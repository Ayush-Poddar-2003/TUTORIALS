#include <iostream>
using namespace std;
/*

- Whenever the name of the attributes and local variables are same, and if we want to initialize the attributes with the help of local variable, this creates a confusion of what's an attribute and what is local variable ?

- To solve this chaos this pointer came to existence !!

- Friend functions do not have a this pointer, because friends are not members of a class.
- Only member functions have a this pointer.

*/

class A
{
    int a, b;

public:
    A(int a, int b)
    {
        this->a = a;    // left is attribute & right is local variable
        this->b = b;
    }

    void show()
    {
        cout << "a : " << a << "b : " << b;
    }
};

int main()
{
    A obj(5, 10);
    obj.show();
    return 0;
}

