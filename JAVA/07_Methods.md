Rules for Method Overriding:

- Should have the same return type and arguments

- The access level cannot be more restrictive than the overridden method's access level (Example: If the superclass method is declared public, the overriding method in the sub class can be neither private nor protected)

- A method declared final or static cannot be overridden

- If a method cannot be inherited, it cannot be overridden

- Constructors cannot be overridden

Method overriding is also known as runtime polymorphism.
Another name for method overloading is compile-time polymorphism.