#include <iostream>
using namespace std;

/*

FRIEND FUNCTION :

- Since Global functions can't access class members, to make them accessible we declare them as friend in class.
- Friend keyword gives it special access to private and protected members of a class.

SYNTAX : class className
        {
            ... .. ...
            friend returnType functionName(arguments); // function whom we would like to make friend
            ... .. ...
        }
  
KEYPOINTS :-
- Friend function can't be called using object of class, as it is not defined inside class scope.
- Friend function can use resource of class only by passing class objects as arguments.
- Access Specifiers have no effect on friend function.*/

class demo
{
private:
    int a, b;

public:
    void getdata()
    {
        cout << "Enter 2 numbers : ";
        cin >> a >> b;
    }

    friend int sum(demo); // friend declared
};

int sum(demo obj)
{
    return (obj.a + obj.b);
}

int main()
{
    demo obj;
    obj.getdata();
    cout << sum(obj);

    return 0;
}

/*---------------------------------------

FRIEND FUNCTION IN 2 CLASSES :

For eg : If we want to compare members of 2 different classes

*/

class B; // early declaration

class A
{
private:
    int a;

public:
    void get()
    {
        cout << "Enter the value of a : ";
        cin >> a;
    }

    friend int compare(A obj1, B obj2);
};

class B
{
private:
    int b;

public:
    void get()
    {
        cout << "Enter the value of b : ";
        cin >> b;
    }

    friend int compare(A obj1, B obj2);
};

int compare(A obj1, B obj2)
{
    if (obj1.a >= obj2.b)
        return obj1.a;
    else
        return obj2.b;
}

int main()
{

    A obj1;
    obj1.get();

    B obj2;
    obj2.get();

    cout << compare(obj1, obj2);
    return 0;
}
