#include<iostream>
#include<string>

using namespace std;

int main(){/*

IN C LANGUAGE
- This string is actually a 1d array of characters, terminated by a null character '\0'.
- Size of the character array containing the string is one more than the number of characters in the word.
- If you do not place the null character at the end of a string constant, The C++ compiler automatically places the '\0' at the end of the string when it initializes the array.*/

    char greeting1[6] = {'H','e','l','l','o','\0'};  // is same as
    char greeting2[] = "Hello";
    
    cout << greeting1 << " - size : " << sizeof(greeting1) << endl ;
    cout << greeting2 << " - size : " << sizeof(greeting2) << endl ;


//  FURTHER C++ supports above methods also has inbuilt DT string which has many inbuilt functions :

    string str1 = "Hello";
    string str2 = "World";
    string str3;

    str3 = str1;
    cout << "\nstr3 : " << str3 << endl;

//  CONCATENATION
    str3 = str1 + str2;
    str3 = str1.append(str2);
    cout << "\nstr1 + str2 : " << str3 << endl;

//  SIZE
    cout << str1.length() << endl;
    cout << str3.size();


return 0;
}
