# COMMENTS
    // Single line comment
    /* Multi line comment */

---
# VARIABLES

JavaScript treats a dollar sign as a letter, identifiers containing $ are valid variable names:

## let

- can not be redeclared in the same block.
- must be declared before use.
- Variables declared inside a { } block cannot be accessed from outside the block:

## var

- Redeclaring a variable inside a block will also redeclare  outside the block:

        var x = 10; // Here x is 10
        
        {
            var x = 2;  // Here x is 2
        }

        // Here x is 2

- Variables defined with var are hoisted: You can use the variable before it is declared:
- should be avoided as it can lead to bugs

## const 

- cannot be Redeclared/ Reassigned.
- Block Scope same as let.
- It does not define a constant value. It defines a constant reference to a value.

When to use JavaScript const?

Always declare a variable with const when you know that the value should not be changed.
Use const when you declare:
- A new Array
- A new Object
- A new Function


