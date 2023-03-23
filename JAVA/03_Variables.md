Declaring (Creating) Variables

type variableName = value;

    String name = "John";
    System.out.println(name);

---
## Final Variables
If you don't want others (or yourself) to overwrite existing values, use the final keyword (this will declare the variable as "final" or "constant", which means unchangeable and read-only):

    final int myNum = 15;
    myNum = 20;  // will generate an error

---
## Display Variables

The println() method is often used to display variables.

To combine both text and a variable, use the + character:

    String name = "John";
    System.out.println("Hello " + name);

---
## IDENTIFIERS NAMING
- Names can contain letters, digits, underscores, and dollar signs
- Names can also begin with $ and _ 