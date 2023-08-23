# ARRAY
An array is a special variable, which can hold more than one value:

### Syntax:

const array_name = [ item1, item2, ... ];      

    const cars = [
        "Saab",
        "Volvo",
        "BMW"
    ];

    // or

    const cars = [];
    cars[0]= "Saab";
    cars[1]= "Volvo";
    cars[2]= "BMW";

    // or

    const cars = new Array("Saab", "Volvo", "BMW");

---

## ARRAY VS OBJECTS

Arrays are a special type of objects. The typeof operator in JavaScript returns "object" for arrays.

Arrays use numbered indexes and objects use named indexes.


    
    const person = ["John", "Doe", 46];
    person[0] returns John:

Objects use names to access its "members". In this example, 

    const person = {fName:"John", lName:"Doe", age:46};
    person.fName returns John:

<br>

---

## Adding Array Elements

using **push()** method:


    const fruits = ["Banana", "Orange", "Apple"];
    fruits.push("Lemon"); 

using **length** property:

    const fruits = ["Banana", "Orange", "Apple"];
    fruits[fruits.length] = "Lemon";  

---

Adding elements with high indexes can create undefined "holes" in an array:


    const fruits = ["Banana", "Orange", "Apple"];
    fruits[6] = "Lemon";  

---
NOTE :

    const points = [40];
    const points = new Array(40);
    // Are not same

if we use new keyword and pass single value it will create an array with that number size

    const points = new Array(40);
    // Create an array with 40 undefined elements: