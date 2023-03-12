#include <iostream>
using namespace std;

/*---------------------------------------

♥♥ CLASS TEMPLATES ♥♥

- We can create abstract classes without actually knowing, what data type will be handled ?

    Syntax :

    template<class Type1, class Type2, ...>
    class ClassName
    {
        ...
        //Body of the class
        ...
    };

♥ TERMS
○ INSTANTATION : Process of creating an object OR a specific class from a class template
○ SPECIALIZATION : The instantiated object of a template class
○ PARTIAL SPECIALIZATION : If a class template is specialized only by some parameters
○ FULL SPECIALIZATION : If a class template is specialized only by all the parameters */

template <class Type>
class Swapper
{
public:
    Type x, y;

public:
    Swapper(Type x, Type y)
    {
        this->x = x;
        this->y = y;
    }
    void swap()
    {
        Type temp;
        temp = x;
        x = y;
        y = temp;
    }
    void display()
    {
        cout << "x=" << x << ", y=" << y << endl;
    }
};

int main()
{
    Swapper<int> iobj(10, 20);
    cout << "Before swap:" << endl;
    iobj.display();
    iobj.swap();
    cout << "After swap:" << endl;
    iobj.display();

    Swapper<float> fobj(10.3, 20.6);
    cout << "Before swap:" << endl;
    fobj.display();
    fobj.swap();
    cout << "After swap:" << endl;
    fobj.display();
    return 0;
}

/* CLASS TEMPLATE FEATURES :-

1.  The template data types allows default arguments

    template <class Type1, class Type2 = int>
    class ClassName
    {
        ...
        //Body of the class
        ...
    };


2.  We can define member functions of a class template outside the class.

    template<class Type>
    return-type ClassName<Type> :: function-name(params-list)
    {
        ...
        //Body of function
        ...
    }

3.  Supports Friend Function */

template <class Type>
class Swapper
{
public:
    Type x, y;

public:
    Swapper(Type x, Type y)
    {
        this->x = x;
        this->y = y;
    }

    template <class Type1>
    friend void swap(Swapper<Type1> &);

    void display()
    {
        cout << "x=" << x << ", y=" << y << endl;
    }
};

template <class Type1>
void swap(Swapper<Type1> &s)
{
    Type1 temp;
    temp = s.x;
    s.x = s.y;
    s.y = temp;
}

int main()
{
    Swapper<int> iobj(10, 20);
    cout << "Before swap:" << endl;
    iobj.display();
    swap(iobj);
    cout << "After swap:" << endl;
    iobj.display();

    Swapper<float> fobj(10.3, 20.6);
    cout << "Before swap:" << endl;
    fobj.display();
    swap(fobj);
    cout << "After swap:" << endl;
    fobj.display();
    return 0;
}

// 4 Supports Static variable :

template <class Type>
class Sample
{
private:
    Type data;

public:
    static int count;
    Sample()
    {
        count++;
    }
    static void show()
    {
        cout << count << endl;
    }
};

template <class Type>
int Sample<Type>::count = 0;

int main()
{
    Sample<int> i1;
    Sample<int> i2;
    Sample<int> i3;
    Sample<char> c;
    Sample<double> d1;
    Sample<double> d2;

    cout << "Number of integer objects: ";
    Sample<int>::show();
    cout << "Number of char objects: ";
    Sample<char>::show();
    cout << "Number of double objects: ";
    Sample<double>::show();

    return 0;
}

