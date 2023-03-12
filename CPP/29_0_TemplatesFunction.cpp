#include <iostream>
using namespace std;

/*

♥ GENERIC PROGRAMMING -
- Programming where the programmer specifies a general code first.
- That code is instantiated based on the parameters passed or at execution.
- Entities such as a class or function created using generic programming are called generics.

♥ TEMPLATES
- To generate short, simple code and to avoid duplication of code,
- C++ provides templates to define the same piece of code for multiple data types.

-----------------------------------------

♥♥ FUNCTION TEMPLATES ♥♥

- A function which contains generic function code to operate on different types of data.
- This enables programmer to write functions without specifying the exact type of parameters.

    Syntax :

    template <class Type, ...>
    return-type function-name(Type arg1, ...)
    {
        //Body of function template
    }

- The template keyword tells the compiler that what follows is a template.
- Here, "class" is a keyword and "Type" is the name of generic argument. */

template <class Type>
void summ(Type x, Type y)
{
    cout << "Sum is: " << x + y << endl;
}

int main()
{
    int a = 10, b = 20;
    summ(a, b);

    float p = 1.5, q = 2.4;
    summ(p, q);

    return 0;
}

/* --------------------------------------

♥ OVERLOADING FUNCTION TEMPLATES -
- As normal functions can be overloaded, template functions can also be overloaded.
- They will have the same name but "different number" of or type of Parameters

- Whenever a compiler encounters the call to a overloaded function,
- First it checks for normal function which if matches, invokes it.
- Otherwise, it checks for template function.

/* --------------------------------------+

♥ RECURSIVE TEMPLATE FUNCTIONS -
- Like normal functions, template functions can also be called  recursively. */

template <class Type>
Type fact(Type n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    int n = 5;
    cout << "Factorial of 5 is: " << fact(5);
    return 0;
}

/* --------------------------------------

♥ FUNCTION TEMPLATE WITH USER DEFINED DATATYPE -
- Userdefined types like class, structure can be passed as arguments to function Template. */

class Student
{
public:
    int age;
    string name;
    Student(int age, string name)
    {
        this->age = age;
        this->name = name;
    }
};

template <class Type>
void display(Type &obj)
{
    cout << "Name is: " << obj.name << endl;
    cout << "Age is: " << obj.age << endl;
}

int main()
{
    Student s(25, "suresh");
    display(s);
    return 0;
}

