#include <iostream>
using namespace std;

/* ------------------  FUNCTIONS -------------------------

- A function is a block of code which only runs when it is called

- NOTE : We always have to declare our function before main() 

- FUNCTION DECLARATION SYNTAX -

                ReturnType FunctionName();

- FUNCTION DEFINATION SYNTAX -

                ReturnType FunctionName() 
                {  
                    code to be executed
                }

--> FUNCTION CALLING

                FunctionName();

-------------------------------------------------------------

Call by Value
This sends the copy of arguments, 
changes made to the parameter inside the function have no effect on the argument.

Call by Reference


Call by Pointer
.


------------------------------------------------------------- */


void CBV(int x, int y)
{
   int temp;
   temp = x; x = y; y = temp; 
   return;
}

void CBP(int *x, int *y)
{
   int temp;
   temp = *x; *x = *y; *y = temp; 
   return;
}

void CBR(int &x, int &y)
{
   int temp;
   temp = x; x = y; y = temp; 
   return;
}

int main () 
{
 
   int a = 100;
   int b = 200;
 
   cout << "Before CBV , value of a & b :" << a <<" "<< b << endl;
   CBV(a, b);
   cout << "After CBV , value of a & b :" << a <<" "<< b << endl;

   cout << "Before CBP , value of a & b :" << a <<" "<< b << endl;
   CBP(&a, &b);
   cout << "After CBP , value of a & b :" << a <<" "<< b << endl;

   cout << "Before CBR , value of a & b :" << a <<" "<< b << endl;
   CBR(a, b);
   cout << "After CBR , value of a & b :" << a <<" "<< b << endl;

   return 0;
}

