/*  BASICS -

Ques : What is C++
       C++ was developed by BJARNE STROUSTRUP, as an extension to the C language.

Ques : Why Use C++
    
      1. Very close to hardware
      2. Object-oriented programming language
      3. As C++ is close to C# and Java, easy to switch to C++ or vice versa.
      4. Portable 


Ques : Difference between C and C++
       C++ was developed as an extension of C, and both languages have almost the same syntax
       The main difference is that C++ support classes and objects, while C does not.

------------------------------------------

Let's break up the BASIC following code to understand it better:*/

#include <iostream>
using namespace std;

int main() 
{
    cout << "Hello World!";
    return 0;
}

/* 

1. #include : pre-processor directive

2. <iostream> : a header file library that lets us work with input and output objects,  

3. using namespace std : we can use names for objects and variables from the standard library.

4. int main() : main function, Any code inside its curly brackets {} will be executed.

5. cout is an object used together with the insertion operator (<<) to output/print text. 

6. Every C++ statement ends with a semicolon ;

7. main() returns '0' ends the main function 

------------------------------------------

NOTE : 
The "using namespace std" line can be replaced by std:: 

         #include <iostream>

         int main() 
         {
             std::cout << "Hello World!";
             return 0;
         }
*/
