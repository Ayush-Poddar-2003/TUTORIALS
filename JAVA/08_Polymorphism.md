## Method Overloading / Compile time Polymorphism:

- Multiple methods can have the same name with different parameters:


## Method Overriding / Run time Polymorphism:

- Same return type and arguments
- A method declared final or static cannot be overridden
- If a method cannot be inherited, it cannot be overridden
- Constructors cannot be overridden

```java
class Animal {
  public void animalSound() {
    System.out.println("The animal makes a sound");
  }
}

class Pig extends Animal {
  public void animalSound() {
    System.out.println("The pig says: wee wee");
  }
}

class Dog extends Animal {
  public void animalSound() {
    System.out.println("The dog says: bow wow");
  }
}

class Main {
  public static void main(String[] args) {
    
    Animal myAnimal = new Animal();  
    Animal myPig = new Pig(); 
    Animal myDog = new Dog();  

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();
  }
}
```