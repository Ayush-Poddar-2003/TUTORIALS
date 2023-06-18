# INHERITENCE
We group the "inheritance concept" into two categories:

- Subclass (child) - the class that inherits 
- Superclass (parent) - the class being inherited 

Java Supports 
- Single, 
- Multilevel 
- Hierarchical.

```JAVA
class Animal{
  void eat(){System.out.println("eating");}
}

class Dog extends Animal{
  void bark(){System.out.println("barking");}
}

class Test{
  public static void main(String args[]){
    Dog d = new Dog();
    d.eat();
    d.bark();
}}
```

---

Multiple inheritance is not supported in java

## SUPER KEYWORD
The super keyword in Java is a reference variable that
is used to refer to immediate parent class objects.
