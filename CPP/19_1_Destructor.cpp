#include <iostream>
using namespace std;

/* DESTRUCTORS:-

   Like constructors, Destructors are also member function, similar name to class name having tilde ' ~ ' sign just before it's name.
   A destructor is used to destroy an object once it goes out of scope.
   It has no arguments and no return value.*/

//--------------------------------------------

int count = 0;

class demo
{
public:
   demo()
   {
      count++;
      cout << "\nNo of objects created : " << count;
   }

   ~demo()
   {
      count--;
      cout << "\nNo of objects destroyed : " << count;
   }
};

int main()
{

   demo obj1, obj2, obj3;
   {
      demo obj4;
   }

   return 0;
}