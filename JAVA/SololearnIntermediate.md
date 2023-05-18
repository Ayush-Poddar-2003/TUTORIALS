# Classes
Each class has a name, and each is used to define attributes and behavior.

    public class Animal {
        void bark() {
            System.out.println("Woof-Woof");
        }
    }

    class MyClass {
        public static void main(String[ ] args) {
            Animal dog = new Animal();
            dog.bark();
        }
    }

---

# Defining Attributes
A class has attributes and methods. 
The attributes are basically variables within a class.

The following choices are available for attributes and methods:
- default: available to any other class in the same package.
- public: Accessible from any other class.
- protected: 
- private: Accessible only within the declared class itself.


It's a best practice to keep the variables within a class private. 
The variables are accessible and modified using Getters and Setters.

---

# Getters & Setters
- Getters and Setters are used to effectively protect your data, particularly when creating classes.
- The setter method takes a parameter and assigns it to the attribute.
- The getter method returns the value of the attribute.


    public class Vehicle {
        private String color;

        public void setColor(String c) {
            this.color = c;
        }

        public String getColor() {
            return color;
        }
    }

"this" keyword is used to refer to the current object.

---

# Constructors
- Constructors are special methods invoked when an object is created and are used to initialize them. 
- A constructor name must be same as its class name.
- A constructor must have no explicit return type.

    public class Vehicle {
        private String color;
        Vehicle(String color) {
            this.color = color;
        }
    }

    public class MyClass {
        public static void main(String[ ] args) {
            Vehicle v = new Vehicle("Blue");
        }
    }

- The constructor is called when you create an object using the new keyword.
- Java automatically provides a default constructor, so all classes have a constructor, whether one is specifically defined or not.

---

# Reference Types
- A reference type stores a reference (or address) to the memory location where the corresponding data is stored.
- When you create an object using the constructor, you create a reference variable.
- Arrays and Strings are also reference data types.