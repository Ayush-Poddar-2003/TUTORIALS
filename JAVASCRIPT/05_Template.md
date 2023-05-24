Synonyms:

Template Literals
Template Strings
String Templates
Back-Tics Syntax

Template Literals use back-ticks (``) rather than the quotes ("") to define a string:

    let text = `Hello World!`;

Template literals allows multiline strings:

    let text =
`The quick
brown fox
jumps over
the lazy dog`;


Template literals provide an easy way to concstenate(interpolate) variables and expressions into strings.

    let firstName = "John";
    let lastName = "Doe";

    let text = `Welcome ${firstName}, ${lastName}!`;