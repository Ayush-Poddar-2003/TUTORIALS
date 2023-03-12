/* 

    GETTING DATATYPE -

    we can get the data type of a variable by using 

    #include<typeinfo>
    typeid(a).name()   --> where a is a variable

------------------------------------------
     TRIGRAPH -

    A few characters have an alternative representation, called a trigraph sequence. 
    A trigraph is a "three-character" sequence that represents a single character and 
    the sequence always starts with two "question" marks.

     ??=  is same for  #

    All the compilers do not support trigraphs and they are not advised to be used 
    because of their confusing nature.


--------------------------------------------------------------
                     - typedef Declarations -

    You can create a new name for an existing data-type using typedef
    typedef int feet;   // now you can use feet instead of int

----------------------------------------------------------------

The setprecision() method of iomanip library in C++ is used to set the ios library floating point precision based on the precision specified as the parameter to this method.

Syntax:

setprecision(int n)
Parameters: This method accepts n as a parameter which is the integer argument corresponding to which the floating-point precision is to be set.


#include <iostream>
#include <cstdio>
#include <iomanip> 
using namespace std;

int main() {
    
    int a;
    long b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;
    cout<< a << '\n' << b << '\n' << c << '\n';
    cout << std::fixed << std::setprecision(3) << d << '\n';
    cout << std::fixed << std::setprecision(9) << e << '\n';
    
    return 0;
}*/