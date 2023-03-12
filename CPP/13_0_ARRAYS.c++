#include <iostream>
using namespace std;
int main()
{

    /* ARRAYS -

        - Used to store multiple values in a single variable
        - Elements are stored in a contiguous memory location.
        - The size of the array should be mentioned while declaring it.
          (take size in separate variable from user before declaration for interactive type)


    /*----------------------- ARRAY DECLARATION --------------------------

        SYNTAX :  datatype Arr_name[size];

        int a[3];
        int a[3] = {1,2,3}
        int a[3] = {}       ==> all elements are 0;  0,0,0
        int a[3] = {1}      ==> 0th index is 1 rest all 0;  1,0,0

        int arr[6] = { 10, 20, 30, 40 } ==> last 2 boxes will be filled with 0



    -----------------------  TRAVERSING ELEMENTS  --------------------*/

    int arr[6] = {11, 12, 13, 14, 15, 16};

    // Way 1
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " " << endl;
    }

    // Way 2
    for (int i = 0; i < 6; i++)
    {
        cout << i[arr] << " " << endl;
    }


    // Way 3 Using * operator

    int marks[] = {23, 45, 56, 89};

    cout << marks << endl;  // ? what u expect , it will give some address
    cout << *marks << endl; // using * only to get whom adress it is of => of first element

    //  hence we can access arrays both by index also with value at operator *

    cout << *marks << endl;       // 23
    cout << *(marks + 1) << endl; // 45
    cout << *(marks + 2) << endl; // 56
    cout << *(marks + 3) << endl; // 89

    //----------------------------------------------------------------

    //                     ARRAY SIZE

    int A[5] = {10, 20, 30, 40, 50};
    cout << sizeof(A);

    /*  Note:
        The result will show 20 instead of 5
        bcoz we are getting the size not the no of elements

        To find out how many elements an array has,
        you have to divide the size of the array by the size of the datatype it contains:*/

    int ArrayLength = sizeof(A) / sizeof(int);
    cout << ArrayLength << "\n\n";

    /* --------------------------------------------------------------------

    Passing Arrays to Functions

    C++ does not allow to pass an entire array as an argument to a function.
    However, You can pass a pointer to an array by specifying the array's name without an index.

    for passing array as an argument we need to define it via -
    - while calling just use array name without brackets

    1)  void myFunction(int *param)
        {
            . . . . . .
        }

    2)  void myFunction(int param[10])
        {
            . . . . . .
        }

    3)  void myFunction(int param[])
        {
            . . . . . .
        }

     --------------------------------------------------------------------*/

    return 0;
}