#include<iostream>
using namespace std;

/*
A storage class defines the scope and life-time of variables and/or functions 
These specifiers precede the type that they modify. 

-----------------------------------------------

1 AUTO :-

- The auto storage class is the default storage class for all local variables.

{
   int mount;
   auto int month;
}

- auto can only be used within functions, i.e., local variables.

-------------------------------------------------

2 REGISTER:-

- The register storage class is used to define local variables that should be stored in a register instead of RAM
- the variable has a maximum size equal to the register size (usually one word) and can't have the unary '&' operator applied to it (as it does not have a memory location)

{
   register int miles;
}

- The register should only be used for variables that require quick access such as counters
- It should also be noted that defining 'register' does not mean that the variable will be stored in a register,
  It means that it MIGHT be stored in a register depending on hardware and implementation restrictions.

-------------------------------------------------

3 STATIC:-

- The static storage class instructs the compiler to keep a local variable in existence 
  during the life-time of the program instead of creating and destroying it each time,
  it comes into and goes out of scope.
- Therefore, making local variables static allows them to maintain their values between function calls.
- It causes only one copy of that member to be shared by all objects of its class.*/

  int staticFun()
  {
      cout << "For static variables: ";
      static int count = 0;
      count++;
      return count;
  }
 
  int nonStaticFun()
  {
      cout << "For Non-Static variables: ";
      int count = 0;
      count++;
      return count;
  }
 
int main()
{
    cout << staticFun() << "\n";
    cout << staticFun() << "\n";
  
    cout << nonStaticFun() << "\n";
    cout << nonStaticFun() << "\n";

/*--------------------------------------------------

4 EXTERN :-

- It gives a reference of a global variable that is visible to ALL the program files.
- When you use 'extern' the variable cannot be initialized as all it does is point the variable name at a storage location that has been previously defined.
- When you have multiple files and you define a global variable or function, which will be used in other files also,
  then extern will be used in another file to give reference of defined variable or function. 

--------------------------------------------------

5 MUTABLE :-

- It allows a member of an object to override const member function. That is, a mutable member can be modified by a const member function.

*/

return 0;
}