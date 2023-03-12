#include<iostream>
#include<typeinfo>
#include<climits>

using namespace std;

int main()
{

// The char data type is used to store a single character. 
// The character must be surrounded by SINGLE quotes, like 'A'; 
// " " will lead to error

    char car = 'B';  
    cout << "Datatype : "     << typeid(car).name() << endl;
    cout << "Size of char : " << sizeof(char) << endl << endl ;

	cout << "The Bits contain in char  : " << CHAR_BIT << endl;
    cout << "Max char  :                 " << CHAR_MAX << endl;
	cout << "Min char  :                 " << CHAR_MIN << endl;
	cout << "Max signed char  :          " << SCHAR_MAX << endl;
	cout << "Min signed char  :          " << SCHAR_MIN << endl;
	cout << "Max unsigned char  :        " << UCHAR_MAX << endl;

cout << "--------------------------------------------------\n";

// Alternatively, you can use ASCII values to display certain characters:

    char a = 65, b = 66 ,c = 67; // char datatype use krkr number de dia
    cout << a << b << c;

return 0;
}