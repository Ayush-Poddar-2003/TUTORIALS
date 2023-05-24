# COMMENTS
// Single line comment
/* Multi line comment */

---
# VARIBLES

The var keyword is used in all JavaScript code from 1995 to 2015.
The let and const keywords were added to JavaScript in 2015.

When to Use JavaScript const?
If you want a general rule: always declare variables with const.
If you think the value of the variable can change, use let.

JavaScript Dollar Sign $
Since JavaScript treats a dollar sign as a letter, identifiers containing $ are valid variable names:

## let

Variables defined with let can not be redeclared.
With let, redeclaring a variable in the same block is NOT allowed:
Variables defined with let must be declared before use.
Variables defined with let have block scope.
Variables declared inside a { } block cannot be accessed from outside the block:

## var

Redeclaring a variable inside a block will also redeclare the variable outside the block:

    var x = 10;
    // Here x is 10

    {
        var x = 2;
        // Here x is 2
    }

    // Here x is 2

Variables defined with var are hoisted to the top and can be initialized at any time.
Meaning: You can use the variable before it is declared:

## const 

Variables defined with const cannot be Redeclared.
Variables defined with const cannot be Reassigned.
Variables defined with const have Block Scope.

When to use JavaScript const?
Always declare a variable with const when you know that the value should not be changed.
Use const when you declare:
- A new Array
- A new Object
- A new Function
- A new RegExp

The keyword const is a little misleading.

It does not define a constant value. It defines a constant reference to a value.

Because of this you can NOT:
    Reassign a constant value
    Reassign a constant array
    Reassign a constant object
But you CAN:
    Change the elements of constant array
    Change the properties of constant object