# OOPS

NOTE : A class should always start with an uppercase first letter, and that the name of the java file should match the class name.

- You can create multiple objects of one class
- You can access attributes by creating an object of the class, and by using the dot syntax (.):

```JAVA
public class Alpha {
    int x = 5;

    public static void main(String[] args) {
        Alpha aa = new Main();  
        aa.x = 9;
        Alpha bb = new Main();  
    }
}
```

Good Practice : One class has all the attributes and methods, while the other class holds the main() method code to be executed

---

## <center>Static vs. Public

In the example below, we created a static method, which means that it can be accessed without creating an object of the class, unlike public, which can only be accessed by objects:

```java
public class Main {

    // Static method
    static void myStaticMethod() {
        System.out.println("Static called ");
    }

    // Public method
    public void myPublicMethod() {
        System.out.println("Public called");
    }

    // Main method
    public static void main(String[] args) {
        myStaticMethod(); 
        // Call the static method without object

        myPublicMethod(); 
        //This would compile an error
        Main myObj = new Main(); 
        myObj.myPublicMethod(); 
        // Call the public method on the object
    }
}
```
---

##  CONSTRUCTOR

Constructor name must match the class name, and it cannot have a return type (like void).

Also note that the constructor is called when the object is created.

All classes have constructors by default: if you do not create a class constructor yourself, Java creates one for you. However, then you are not able to set initial values for object attributes.