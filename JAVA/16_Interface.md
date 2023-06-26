# Interface
- An interface in Java is a blueprint of a class. 
- It has static constants and abstract methods.
- There can be only abstract methods not the method body.
- It is used to achieve abstraction and multiple
inheritances in Java

---
## How interface?
- The Java compiler adds **public** and **abstract** Keywords before the interface method. 
- Moreover, it adds **public**, **static** and **final** keywords before data members.


---
```java
// INTERFACE CREATED
interface Animal {
  public void animalSound();
  public void sleep(); 
}

//IMPLEMENTING INTERFACE
class Pig implements Animal {
  public void animalSound() {
    System.out.println("The pig says: wee wee");
  }
  public void sleep() {
    System.out.println("Zzz");
  }
}

class Main {
  public static void main(String[] args) {
    Pig myPig = new Pig();  // Create a Pig object
    myPig.animalSound();
    myPig.sleep();
  }
}
```

---

```java
interface FirstInterface {
  public void myMethod(); // interface method
}

interface SecondInterface {
  public void myMethod(); // interface method
}

class DemoClass implements FirstInterface, SecondInterface {
  public void myMethod() {
    System.out.println("Some text..");
  }
}

class Main {
  public static void main(String[] args) {
    DemoClass myObj = new DemoClass();
    myObj.myMethod();
  }
}
```

## WHY?
Multiple inheritance is not supported through class in java, but it is possible by an interface, why?
- Multiple inheritance is not supported in the case of class because of ambiguity.
However, it is supported in case of an interface
because there is no ambiguity.
