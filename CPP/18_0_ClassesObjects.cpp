#include<iostream>
using namespace std;

/*

WHAT ARE CLASSES AND OBJECTS ?

- A class is a template for objects, and an object is an instance of a class.
- When objects are created, they inherit all the variables and functions from the class.
- Variables are reffered as ATTRIBUTES & functions are reffered as METHODS inside class.
- These are often referred to as "class members".

-----------------------------------------

CREATING CLASS : 
- To create a class, use the class keyword followed by className and class body, enclosed by {} and ; */

class MyClass 
{       
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};


/* CREATING OBJECT :
- To create an object of Class, specify the className, followed by the object name.
- To access the class attributes, use the dot (.) on the object:*/

int main() 
{
    MyClass myObj;  // ClassName then ObjectName 

    // Access attributes and set values
    myObj.myNum = 15; 
    myObj.myString = "Some text";

    // Print attribute values
    cout << myObj.myNum << "\n";
    cout << myObj.myString;

    return 0;
}