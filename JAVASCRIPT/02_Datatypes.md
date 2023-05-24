# DATATYPES
JavaScript has 8 Datatypes
1. String
2. Number
4. Boolean
5. Undefined
6. Null
8. Object
3. Bigint
7. Symbol

---
## The Object Datatype
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
## UNDEFINED

    let car;    // Value is undefined, type is undefined
Any variable can be emptied, by setting the value to undefined. The type will also be undefined

    car = undefined;

---
# NUMBERS

JavaScript has only one type of number. Numbers can be written with or without decimals.

Integers (numbers without a period or exponent notation) are accurate up to 15 digits.The maximum number of decimals is 17.

A common mistake is to expect this result to be 30:

    let x = 10;
let y = 20;
let z = "The result is: " + x + y;
If you add a string and a number, the result will be a string concatenation

---
NaN - Not a Number
NaN is a JavaScript reserved word indicating that a number is not a legal number.

NaN is a number: typeof NaN returns number:
Infinity
Infinity (or -Infinity) is the value JavaScript will return if you calculate a number outside the largest possible number

Infinity is a number: typeof Infinity returns number.