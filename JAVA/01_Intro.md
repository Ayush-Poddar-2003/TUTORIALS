# What is Java?
- High level, robust, object-oriented and secure programming language.
- James Gosling is known as the father of Java. 
- Developed by Sun Microsystems (which is now Oracle) in the year 1995. 
- Before Java, its name was Oak. Since Oak was already a registered company, so James Gosling and his team changed the name from Oak to Java


# Important features -
- Simple, Portable
- Object-Oriented
- Platform independent
- Secured
- Robust
- Architecture neutral
- Interpreted
- High Performance
- Multithreaded
- Distributed
- Dynamic


# CPP VS JAVA
- Java is platform-independent.
- Java doesn't support the goto statement.
- Java doesn't support multiple inheritance through class. 
- Java supports call by value only. There is no call by reference in java.
- Java doesn't support structures and unions.

---

## SYNTAX

    class Simple{  
        public static void main(String args[]){  
        System.out.println("Hello Java");  
        }  
    }  


- class keyword is used to declare a class in Java.
- public keyword is an access modifier that represents visibility. It means it is visible to all.
- static is a keyword. If we declare any method as static, it is known as the static method. The core advantage of the static method is that there is no need to create an object to invoke the static method. The main() method is executed by the JVM, so it doesn't require creating an object to invoke the main() method. So, it saves memory.
- void is the return type of the method. It means it doesn't return any value.
- main represents the starting point of the program.
- String[] args or String args[] is used for command line argument. We will discuss it in coming section.
- System.out.println() is used to print statement. Here, System is a class, out is an object of the PrintStream class, println() is a method of the PrintStream class. We will discuss the internal working of System.out.println() statement in the coming section.