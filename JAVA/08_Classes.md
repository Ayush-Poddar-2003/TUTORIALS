class should always start with an uppercase first letter, and that the name of the java file should match the class name.

You can create multiple objects of one class:

    public class Main {
        int x = 5;

    public static void main(String[] args) {
        Main myObj1 = new Main();  
        Main myObj2 = new Main();  
        }
    }

one class has all the attributes and methods, while the other class holds the main() method code to be executed

You can access attributes by creating an object of the class, and by using the dot syntax (.):

    public class Main {
        int x;

    public static void main(String[] args) {
        Main myObj = new Main();
        myObj.x = 40;
        System.out.println(myObj.x);
        }
    }

Static vs. Public
You will often see Java programs that have either static or public attributes and methods.

In the example above, we created a static method, which means that it can be accessed without creating an object of the class, unlike public, which can only be accessed by objects:

    public class Main {
    // Static method
    static void myStaticMethod() {
        System.out.println("Static methods can be called without creating objects");
    }

    // Public method
    public void myPublicMethod() {
        System.out.println("Public methods must be called by creating objects");
    }

    // Main method
    public static void main(String[] args) {
        myStaticMethod(); // Call the static method
        // myPublicMethod(); This would compile an error

        Main myObj = new Main(); // Create an object of Main
        myObj.myPublicMethod(); // Call the public method on the object
    }
    }

Note that the constructor name must match the class name, and it cannot have a return type (like void).

Also note that the constructor is called when the object is created.

All classes have constructors by default: if you do not create a class constructor yourself, Java creates one for you. However, then you are not able to set initial values for object attributes.