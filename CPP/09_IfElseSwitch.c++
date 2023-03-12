#include<iostream>
using namespace std ;
int main()
{

/* ---------------------CONDITIONAL STATEMENTS------------------------


    if (condition 1) 
    {
        // block of code
    } 
    
    else if (condition 2) 
    {
        // block of code
    } 
    
    else 
    {
        // block of code
    }


--------------------------------------------------------------

Short Hand If...Else " Ternary Operator "

       variable = (condition) ? expressionTrue : expressionFalse;


--------------------------------------------------------------

Switch case ----

    switch(expression) 
    {
      case x:   // code block
        break;
      case y:   // code block
        break;
      default:  // code block
    }

-----------------------------------------------------------------*/

    
    int time = 20;
    
    if (time < 18) 
    {
      cout << "Good day";
    } 
    
    else 
    {
      cout << "Good evening";
    }

//  OR You can simply write:

    string a = (time < 18) ? "Good day" : "Good evening";
    cout << a;

return 0;
}