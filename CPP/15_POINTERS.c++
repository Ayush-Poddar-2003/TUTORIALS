#include<iostream>
#include<string>
using namespace std;
int main()
{

/*   ------------------------ POINTERS ------------------------------

    - A pointer is a variable that stores the memory address of other variable.

      SYNTAX : Datatype *var-name;
      
    - The actual data type of the value of all pointers, whether integer, float, character, is the same, 
      a long hexadecimal number that represents a memory address. 
    - The only difference of different datatypes is the datatype of the variable/constant that the pointer points to.


//   ------------------------------------------------------

    - The & operator is called address of operator, 
      and * operator is called value at, dereference operator       */

        int a = 3 ;
        int* b = &a ;

        cout << a <<endl;       // a ki value
        cout << &a <<endl;      // a ka address
        cout << b <<endl;       // b jo pointer h uski value
        cout << *b <<endl;      // b pointer pr kiska address h
        cout << &b <<endl;      // b pointer kha bna h

/*-----------------------------------------------------------------

SOME IMPORTANT CONCEPTS OF POINTERS -

1)  NULL POINTER-

    - A pointer that is assigned NULL is called a null pointer.
    - The NULL pointer is a constant with a value of zero 
    - Always better to use null in case of empty pointers to prevent bugs */

        int  *ptr1 = NULL;
        cout << "The value of ptr is " << ptr1 << endl; /*


2)  POINTER ARITHEMETIC -

    - Since an address is a numeric value; therefore, you can perform arithmetic operations on a pointer  
    - There are four arithmetic operators  ++, --, +, and -

    - We prefer using a pointer in our program instead of an array because the variable pointer can be incremented, 
      unlike the array name which cannot be incremented because it is a constant pointer.
      (agr array ka naam use krenge to bs 1st element ko refer krega , pr ptr ki help se sbko refer kr skte increment krkr)*/

        int  var2[3] = {10, 100, 200};
        int  *ptr2;

        ptr2 = var2; // ptr me var ka address gya "1st element ka"
    
        for (int i=0; i<3; i++) {
            cout << "Address of var2[" << i << "] = " << ptr2 << endl;
            cout << "Value of var2[" << i << "] = " << *ptr2 << endl;
            ptr2++;  // ++ Operator moves ptr to next element
        } 

     // SAME CHEEZ AGAR ARRAY SE KRE TO -
        for (int i=0; i<3; i++) 
        {
            *var2 = i;    // This is a correct syntax but it can change only 1st element hence ptr are preferred
         //  var2++;      // this won't work

        }/*


3)  POINTER TO POINTER -

    - The first pointer contains the address of the second pointer, which points to the location that contains the actual value
    - SYNTAX : DT **ptr    */

        int  var3 ;
        int  *ptr3;
        int  **pptr3;

        var3 = 3000;
        ptr3 = &var3;
        pptr3 = &ptr3;

        cout << "\nValue of var : " << var3 << endl;
        cout << "Value available at *ptr : " << *ptr3 << endl;
        cout << "Value available at **pptr : " << **pptr3 << endl << endl;/*


4)  POINTER <-> FUNCTION

    - While calling send the address : func_name (&var)
    - While defining use * value at  : func_name (*add){}


5)  ARRAY OF POINTERS - 

    Declaration of an array of pointers to an integer −
    SYNTAX = int *ptr[SIZE];

    Following example makes use of three integers which will be stored in an array of pointers as follows −    */

        int  var5[3] = {10, 100, 200};
        int *ptr5[3];
        
        for (int i=0; i<3; i++) {
            ptr5[i] = &var5[i]; // assign the address of integer.
        }
        
        for (int i=0; i<3; i++) {
            cout << "Value of var[" << i << "] = ";
            cout << *ptr5[i] << endl;
        }
    
/*-----------------------------------------------------------------
REFERENCES - 

A reference variable is an alias, that is, another name for an already existing variable. Once a reference is initialized with a variable, either the variable name or the reference name may be used to refer to the variable.

REFERENCES VS POINTERS --
References are often confused with pointers but 3 major differences are -

    - You cannot have NULL references.
    - Once a reference is initialized to an object, it cannot be changed to refer to another object. Pointers can be pointed to another object at any time.
    - A reference must be initialized when it is created. Pointers can be initialized at any time. */

    return 0;
}
