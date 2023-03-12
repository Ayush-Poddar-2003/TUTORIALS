#include <iostream>
using namespace std;

/*

VIRTUAL FUNCTION / RUN TIME POLYMORPHISM
    - Virtual is a keyword
    - Virual function are redfined in derived class
    - When a virtual function is defined in base class, 
        then the pointer to base class is created,
        Now on the basis of type of object assigned, the respective class function is called.

PURE VIRTUAL FUNCTION :-
    - When virtual function has no definition and is assigned to 0
*/

class A
{
public:
    virtual void show() 
    {
        cout << "Base class";
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "Derived class";
    }
};

int main()
{
    A *bptr;  // 1) base class ka pointer bnaenge
    A aa;     // 2) Agr base class ki hi object h to simply base wala func call ho jayega

// pr agr hm derived class ka object bnaenge tb bhi base ka hi function call hoga, use solve krne ke liye virtual keyword use krte jis se derived ka func call hota jb derived ka object bnate h !!

    bptr = &aa;
    bptr->show();

    return 0;
}

/*---------------------------------------


Pure Virtual Functions
Pure virtual Functions are virtual functions with no definition. Declaration of pure virtual 
function
virtual void display() =0; // pure function
In the above declaration of the function, the display() is a pure virtual function. The 
assignment operator is not used to assign zero to this function. It is used just to instruct the 
compiler that the function is a pure virtual function and that it will not have a definition.
A pure virtual function declared in the base class cannot be used for any operation. The class 
containing the pure virtual function cannot be used to declare objects. Such classes are known as 
abstract classes or pure abstract classes*/

