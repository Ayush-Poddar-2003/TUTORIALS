#include <iostream>
using namespace std;

/* ------------- Function Overloading

Multiple functions can have the same name as long as
the number and/or type of parameters are different.
-------------------------------------------------------*/

int plusFunc(int x, int y)
{
  cout << x + y;
}

float plusFunc(float x, float y, float z)
{
  cout << x + y;
}

int main()
{
  plusFunc(8, 5);
  plusFunc(4.3, 6.26, 2.5);

  return 0;
}

/*---------------------------------------

When the compiler is unable to decide which function is to be invoked among the overloaded function, this situation is known as function overloading.

When the compiler shows the ambiguity error, the compiler does not run the program.

Causes of Function Overloading:

Type Conversion.
Function with default arguments.
Function with pass by reference.

 -------------------------------------- */

void fun(int);
void fun(float);
void fun(int i)
{
  std::cout << "Value of i is : " << i << std::endl;
}
void fun(float j)
{
  std::cout << "Value of j is : " << j << std::endl;
}
int main()
{
  fun(12);
  fun(1.2);
  return 0;
}

// The above example shows an error "call of overloaded 'fun(double)' is ambiguous". The fun(10) will call the first function. The fun(1.2) calls the second function according to our prediction. But, this does not refer to any function as in C++, all the floating point constants are treated as double not as a float. If we replace float to double, the program works. Therefore, this is a type conversion from float to double.

// -------------------------------------

void fun(int);
void fun(int, int);
void fun(int i)
{
  std::cout << "Value of i is : " << i << std::endl;
}
void fun(int a, int b = 9)
{
  std::cout << "Value of a is : " << a << std::endl;
  std::cout << "Value of b is : " << b << std::endl;
}
int main()
{
  fun(12);

  return 0;
}

// The above example shows an error "call of overloaded 'fun(int)' is ambiguous". The fun(int a, int b=9) can be called in two ways: first is by calling the function with one argument, i.e., fun(12) and another way is calling the function with two arguments, i.e., fun(4,5). The fun(int i) function is invoked with one argument. Therefore, the compiler could not be able to select among fun(int i) and fun(int a,int b=9).


//---------------------------------------

void fun(int);  
void fun(int &);   
int main()  
{  
int a=10;  
fun(a); // error, which f()?  
return 0;  
}  
void fun(int x)  
{  
std::cout << "Value of x is : " <<x<< std::endl;  
}  
void fun(int &b)  
{  
std::cout << "Value of b is : " <<b<< std::endl;  
}  

//The above example shows an error "call of overloaded 'fun(int&)' is ambiguous". The first function takes one integer argument and the second function takes a reference parameter as an argument. In this case, the compiler does not know which function is needed by the user as there is no syntactical difference between the fun(int) and fun(int &).

//---------------------------------------


