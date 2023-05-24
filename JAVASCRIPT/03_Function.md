## JavaScript Function Syntax
A JavaScript function is defined with the function keyword, followed by a name, followed by parentheses ().

    function myFunction(p1, p2) {
        return p1 * p2;
    }

**Accessing a function without () returns the function and not the function result:**

    function toCelsius(fahrenheit) {
        return (5/9) * (fahrenheit-32);
    }

    let value = toCelsius();
    let value = toCelsius;

toCelsius refers to the function object, and toCelsius() refers to the function result.