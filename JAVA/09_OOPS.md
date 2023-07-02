# OOPS

NOTE : A class should always start with an uppercase first letter, and that the name of the java file should match the class name.

- You can create multiple objects of one class
- You can access attributes by creating an object of the class, and by using the dot syntax (.):

```JAVA
public class Alpha {
    int x = 5;

    public static void main(String[] args){
        Alpha aa = new Alpha();  
        aa.x = 9;

        Alpha bb = new Alpha();  
    }
}
```

Good Practice : One class has all the attributes and methods, while the other class holds the main() method code to be executed

---
<br>

## <center>Static vs. Public Class
<br>

**Static** : can be accessed without creating an object of the class.

**Public** : can only be accessed by objects:

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
        // Calling static method without object

        myPublicMethod(); => ERROR
        //This would compile an error
        Main myObj = new Main(); 
        myObj.myPublicMethod(); 
        // Call the public method on the object
    }
}
```
<br>

---

##  <center>CONSTRUCTOR
<br>

Java has only default and copy constructor
- Constructor name must match the class name
- Don't have a return type
- Called when the object is created.

All classes have constructors by default: if you do not create a class constructor yourself, Java creates one for you.

### Java Copy Constructor
There is no copy constructor in Java, but we can like:-

    class Student{  
        int id;  
        String name;  
          
        Student(int i,String n){  
            id = i;  
            name = n;  
        }  
          
        Student(Student s){  
            id = s.id;  
            name =s.name;  
        }   
    
        public static void main(String args[]){  
            Student s1 = new Student(1,"aa");  
            Student s2 = new Student(s1);  
        }  
    }  
