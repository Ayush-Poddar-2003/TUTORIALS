# OBJECTS
Objects are variables too. But objects can contain many values.

    const car = {type:"Fiat", model:"500", color:"white"};

It is a common practice to declare objects with the const keyword.

The name:values pairs in JavaScript objects are called properties:
You can access object properties in two ways:

    objectName.propertyName
    // or
    objectName["propertyName"]

---

## Object Methods
Objects can also have methods.

Methods are actions that can be performed on objects.

Methods are stored in properties as function definitions.

    const person = {
        firstName: "John",
        lastName : "Doe",
        id       : 5566,
        fullName : function() {
            return this.firstName + " " + this.lastName;
        }
    };

You access an object method with the following syntax:

    objectName.methodName()
    or
    name = person.fullName();

---

When a JavaScript variable is declared with the keyword "new", the variable is created as an object:
Do Not Declare Strings, Numbers, and Booleans as Objects!

---
Comparing two JavaScript objects always returns false.