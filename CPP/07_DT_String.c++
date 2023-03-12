#include<iostream>
#include<string> // new header file for strings
#include<typeinfo>

using namespace std;
int main() 
{


/*  String values must be surrounded by double quotes" "
    To use strings, you must include an additional header file <string> */

    string a = "Hello";
    cout << "Datatype : " << typeid(a).name() << endl;
    cout << "Size : " << sizeof(a) << endl;

// ----------------------------------------------------------------------

/*                          GETLINE() FUNCTION

    IMPORTANT :
    cin >> considers a space (whitespace, tabs, etc) as a terminating character, 
    which means that it will display only single word (even if you type many words):*/
   
    string FULLNAME;

    cout << "Type your full name: ";
    cin >> FULLNAME; 

    cout << "Your name is: " << FULLNAME; 

/*  Only first name entered will appear
    To overcome it, we use the getline() function */

    cout << "Type your full name again: ";
    getline (cin, FULLNAME); // <----- this won't work due to buffer remove above cin code 


    cout << "Your name is: " << FULLNAME; // now it will display all words

// ----------------------------------------------------------------

//  YOU CAN USE GETLINE IN LOOPS TOO -

    string str[10];

    cout << "Enter 10 words: " << endl;
    for(int i = 0; i < 10; ++i)
    {
      getline(cin, str[i]);   // JOD
    }

// ----------------------------------------------------------------------

// more after array **


    return 0;
}
