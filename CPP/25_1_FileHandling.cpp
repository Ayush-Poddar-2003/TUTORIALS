/*

file is collection of data which occupies some space in the disk.
C++ file handling provides a mechanism to store output of a program in a file and read output from a file and display on the disk.

file deals with 3 objects :
    1. ifstream - To read information
    2. ofstream - to write information
    3. fstream - to perform both
    Available in fstream header file to deal with disk work

basic includes -
    1. istream - for name cin
    2. ostream - for output cout
    3. iostream - for both
    all usnder iostream header file
*/

#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    char name[75];
    string line;

    ofstream os;    // file write object

    os.open("testout.txt");

    cout << "Writing to a text file:" << endl; // terminal ke liye
    cout << "Please Enter your name: ";
    cin.getline(name, 100);

    os << name << endl; // file me bhej do using << operator

    cout << "Please Enter your age: ";
    cin >> name;
    cin.ignore();
    os << name << endl;

    os.close();

    ifstream is;    // file read object

    is.open("testout.txt");

    cout << "Reading from a text file:" << endl;
    while (getline(is, line))
    {
        cout << line << endl;
    }

    is.close();

    return 0;
}