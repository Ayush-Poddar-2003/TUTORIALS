#include<iostream>
using namespace std;
int main(){

/*  C++ Structures -

    - Structures (also called structs) are a way to group several related variables into one place. 
    - Each variable inside the structure is known as a MEMBER of the structure.
    - Unlike an array, a structure can contain many different data types (int, string, bool, etc.).
    - Make structures before main() !!


--------------------------- Creating a Structure -------------------------------

    - To create a structure, use the struct keyword and declare each member(variable) inside curly braces.
    - After the declaration, specify the name of the whole structure variable after } */

        struct                 // Structure declaration
        {                      
            int myNum;         // Member (int DT myNum variable)
            string myString;   // Member (string DT myString variable)
        } myStructure;         // Structure variable(which contains all these datatypes)


/*------------------------ Access Structure Members ---------------------------

To access members of a structure, use the dot syntax (.)                       */

     // Assign values to members of myStructure
        myStructure.myNum = 1;
        myStructure.myString = "Hello World!";

     // Print members of myStructure
        cout << myStructure.myNum << "\n";
        cout << myStructure.myString << "\n";

// ----------------------------------------------------------------------------------

    // You can use a comma (,) to use one structure for many variables:

        struct 
        {
            string brand;
            string model;
            int year;
        } myCar1, myCar2;  // We can add variables by separating them with a comma here

    // or we can declare after main if onlye we write name of structure **    

    // Put data into the first structure
        myCar1.brand = "BMW";
        myCar1.model = "X5";
        myCar1.year = 1999;

    // Put data into the second structure
        myCar2.brand = "Ford";
        myCar2.model = "Mustang";
        myCar2.year = 1969;

    // Print the structure members
        cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
        cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

// ----------------------------------------------------------------------

// -------------------------- Named Structures --------------------------

// By giving a name to the structure, you can treat it as a DATA TYPE (like int a) 
// This means that you can create variables with this structure anywhere in the program at any time.

// To create a named structure, put the name of the structure right after the struct keyword:

    struct car // car can be used as datatype
        {
            string brand;
            string model;
            int year;
        };

// To declare a variable that uses the structure, use the name of the structure as the data type of the variable:

// FOR EXAMPLE -

    // Declare a structure named "car"

        car myCar1; // car is datatype and mycar1 is variable using it

        myCar1.brand = "BMW";
        myCar1.model = "X5";
        myCar1.year = 1999;

        // Create another car structure and store it in myCar2;
        car myCar2;

        myCar2.brand = "Ford";
        myCar2.model = "Mustang";
        myCar2.year = 1969;
        
        // Print the structure members
        cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
        cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";


// ----------------- DERIVED STRUCTURE ---------------------

struct Base // parent struct
{
    public:
        int x;
};

struct Derived : Base // child is base derived accesing base too
{
    public:
        int y;
};

	Derived d;
	d.x = 20;
	cout << d.x;

 return 0;
}
