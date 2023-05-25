# ARRAY
An array is a special variable, which can hold more than one value:

Syntax:

const array_name = [item1, item2, ...];      

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

# ARRAY VS OBJECTS

Arrays are a special type of objects. The typeof operator in JavaScript returns "object" for arrays.

Arrays use numbered indexes and objects use named indexes.


Arrays use numbers to access its "elements". In this example, person[0] returns John:
const person = ["John", "Doe", 46];

Objects use names to access its "members". In this example, person.firstName returns John:
const person = {firstName:"John", lastName:"Doe", age:46};

---

Adding Array Elements
The easiest way to add a new element to an array is using the push() method:

Example
const fruits = ["Banana", "Orange", "Apple"];
fruits.push("Lemon");  // Adds a new element (Lemon) to fruits

New element can also be added to an array using the length property:

Example
const fruits = ["Banana", "Orange", "Apple"];
fruits[fruits.length] = "Lemon";  // Adds "Lemon" to fruits

---

Adding elements with high indexes can create undefined "holes" in an array:

Example
const fruits = ["Banana", "Orange", "Apple"];
fruits[6] = "Lemon";  // Creates undefined "holes" in fruits

---

const points = [40];
// is not the same as:
const points = new Array(40);
// Create an array with 40 undefined elements: