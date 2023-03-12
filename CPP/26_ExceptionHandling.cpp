#include <iostream>
using namespace std;
/*

ERRORS :-

1) LOGICAL
    - due to wrong logic
    - can't identified by compiler

2) SEMANTIC
    - due to wrong syntax of code
    - identified by compiler

3) RUN TIME ERROR
    - unpredicible errors

-----------------------------------------

EXCEPTION HANDLING :-

- Exceptions - Some unpredictable circumstances when our program terminates suddenly due to some errors/issues.
- These happen during executoion of the program
- Exception Handling helps in dealing the exceptions by transferring the control from one part of code to another.

- We have different blocks for exception handling :

# TRY :-
    This block contains the code in which there might be an exception
    As soon as exception comes , this sends it to catch block using throw block

# THROW:-
    This sends exception to catch block
    The throw block is present inside the try block
    It is not essential for the throw statement to appear in the try block it can be placed in any function,
    if the function is to be invoked through the try block.

# CATCH:-
    This block handles the exception
    The data type used by throw and catch statements should be same, otherwise,
    the program is aborted using the abort() function, which is executed implicitly by the compiler

NOTE : We can use multiple throw and multiple catch with single try statement

*/

int main()
{
    int a, b, c;
    cout << "Enter two numbers : ";
    cin >> a >> b;

    try
    {
        if (b != 0)
        {
            c = a / b;
            cout << "quotient : " << c;
        }
        else
        {
            throw b;
        }
    }
    catch (int b)
    {
        cout << "Can't divide by 0";
    }
    return 0;
}

/* --------------------------------------

IMPORTANT POINTS -

- When an exception that is not specified is thrown, it is known as an unexpected exception.
- In case an exception is thrown before the complete execution of a constructor,
  the destructor for that object will not be executed.
- Overuse of exception handling increases the program size. So, apply it whenever most necessary.
- Incorrect use of exception handling is not consistent and generates bugs which is hard to debug such bugs.

-----------------------------------------

Re-throwing Exceptions
It is also possible to again pass the exception received to another exception handler.*/

void sub(int j, int k)
{
    cout << "inside function sub()\n";
    try
    {
        if (j == 0)
            throw j;
        else
            cout << "Subtraction =" << j - k << "\n";
    }
    catch (int)
    {
        cout << "Caught Null value \n";
        throw;
    }
    cout << "* *End of sub() * **\n\n";
}

int main()
{

    cout << "\n inside function main()\n";
    try
    {
        sub(8, 5);
        sub(0, 8);
    }

    catch (int)
    {
        cout << "caught null inside main() \n";
    }

    cout << "end of function main() \n";

    return 0;
}

// MULTIPLE CACH STATEMENT ---------------

void num(int k)
{
    try
    {
        if (k == 0)
            throw k;
        else if (k > 0)
            throw 'P';
        else if (k < 0)
            throw .0;
        cout << "* **try block * **\n";
    }
    catch (char g)
    {
        cout << "Caught a positive value \n";
    }
    catch (int j)
    {
        cout << "caught an null value \n";
    }
    catch (double f)
    {
        cout << "Caught a Negative value \n";
    }
    cout << "* **try catch * **\n \n";
}
int main()
{
    cout << "Demo of Multiple catches\n";
    num(0);
    num(5);
    num(-1);
    return 0;
}

//---------------------------------------

