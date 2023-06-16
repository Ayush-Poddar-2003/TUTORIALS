A package in Java is used to group related classes.

Built-in Packages
you can either import a single class (along with its methods and attributes), or a whole package that contain all the classes

    import package.name.Class;  //for single class
    import package.name.*;   //for whole package

User Defined
To create a package, use the package keyword:

    package mypack;
    class MyPackageClass {
        public static void main(String[] args) {
            System.out.println("This is my package!");
        }
    }

save normally, Then compile the package:

    C:\Users\Your Name>javac -d . MyPackageClass.java

The -d keyword specifies the destination for where to save the class file