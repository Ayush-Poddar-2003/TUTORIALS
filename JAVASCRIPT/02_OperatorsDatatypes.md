There are different types of JavaScript operators:

    Arithmetic Operators
    Assignment Operators
    Comparison Operators
    String Operators
    Logical Operators
    Bitwise Operators
    Ternary Operators
    Type Operators

The typeof operator returns the type of a variable or an expression:
<br>
<br><br>

---

# <center>DATATYPES
JavaScript has 8 Datatypes
1. String
2. Number
3. Bigint
4. Boolean
5. Undefined
6. Null
7. Symbol
8. Object
<br><br>

---
## 1. STRING**

---
## 2. NUMBER

JavaScript has only one type of number, with or without decimals.

Integers are accurate up to 15 digits.The maximum number of decimals is 17.


    let x = 10;
    let y = 20;
    let z = "The result is: " + x + y;
    //A common mistake is to expect this result to be 30:

NOTE:  "If you add a string and a number, the result will be a string concatenation"

### 2.1 NaN - Not a Number
NaN is a JavaScript reserved word indicating that a number is not a legal number.
typeof NaN returns number:

### 2.2 Infinity
Infinity (or -Infinity) is the value JavaScript will return if you calculate a number outside the largest possible number
typeof Infinity returns number.

---
## 5. UNDEFINED

    let car;    // Value & type is undefined

Any variable can be emptied, by setting the value to undefined. The type will also be undefined

    car = undefined;

---
## OBJECT
The object data type can contain:

1. An object
2. An array
3. A date

---

JavaScript has dynamic types, same variable can be used to hold different data types:

    let x;       // Now x is undefined
    x = 5;       // Now x is a Number
    x = "John";  // Now x is a String


Javascript numbers are always of type:
double (64-bit floating point).


---