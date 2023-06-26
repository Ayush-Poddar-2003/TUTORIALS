# INHERITENCE
We group the "inheritance concept" into two categories:

- Subclass (child) - the class that inherits 
- Superclass (parent) - the class being inherited 

Java Supports 
- Single, 
- Multilevel 
- Hierarchical.

```JAVA
// Single
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

//------------------------------------
// Multilevel
class Animal{
  void eat(){System.out.println("eating");}
}

class Dog extends Animal{
  void bark(){System.out.println("barking");}
}

class Cat extends Dog{
  void meow(){System.out.println("barking");}
}

//------------------------------------
// Hierarchial
class Animal{
  void eat(){System.out.println("eating");}
}

class Dog extends Animal{
  void bark(){System.out.println("barking");}
}

class Cat extends Animal{
  void meow(){System.out.println("barking");}
}
```

---

Multiple inheritance is not supported in java

## Important Points
- Every class is implicitly a subclass of the Object class.
- Superclass can only be one
<br>
<br>

---
## <CENTER>SUPER KEYWORD
The super keyword in Java is a reference variable that is used to refer to parent class objects.

Used when parent and child class have same name objects


### 1. Use of super with Variables
```java
class Vehicle {
	int maxSpeed = 120;
}

class Car extends Vehicle {
	int maxSpeed = 180;
	void display()
	{
		System.out.println("Max: "+ super.maxSpeed );
	}
}

class Test {
	public static void main(String[] args)	{
		Car small = new Car();
		small.display();
	}
}
// Maximum Speed: 120
```
<br>

### 2. Use of super with Methods

```java
class Person {
	void message(){
		System.out.println("This is parent class\n");
	}
}

class Student extends Person {
	void message(){
		System.out.println("This is child class");
	}

	void display()	{
		message();
		super.message();
	}
}

class Test {
	public static void main(String args[]){
		Student s = new Student();
		s.display();
	}
}
// This is child class
// This is parent class
```
<br>

### 3. Use of super with constructors

NOTE : When calling a superclass constructor, the super() statement must be the first statement in the constructor of the subclass.

```java
class Person {
	Person(){
		System.out.println("parent class Constructor");
	}
}

class Student extends Person {
	Student(){
		super();
		System.out.println("child class Constructor");
	}
}

class Test {
	public static void main(String[] args)	{
		Student s = new Student();
	}
}
// parent class Constructor
// child class Constructor
```