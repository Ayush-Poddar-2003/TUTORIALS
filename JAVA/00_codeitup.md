java was developed by james gasoling

c -> c++ -> java

java : pure oops

java is alive even after 30 years

usecase -
desktop app
mobile app
web app
embedded system

--------------- 1 ---------------------

java installation

--------------- 2 ---------------------

java features

simple
oops
robust : less prone to errors
secure
multithreading : multiple tasks simultaneously
Architecture neutral : platform independent
java -> compile -> byte code + jdk (this byte code can run on any machine)
portable

---------------- 3 ---------------

c++ vs java

cpp : 
platform dependent
supports goto, operator overloading, pointer, multiple inheritence
it uses a compiler
it supports call by value and call by reference
memory management is done using pointer
runtime error detection by programmer
libraries low lvl functions
procedural + oops
has ::, structure and union
it has new and delete keywrd for object management

java : 
platform independent
doesn't supports goto, operator overloading, pointer, multiple inheritence
it uses a compiler and interpreter
it supports call by value
memory management is done by system

------------------4--------------------

JVM : 
Java virtual machine provides runtime environment to execute java byte code
JVM doesn't understand java code directly,
hence we need to compile .java files into .class files containg bytecode understandable by jvm

JRE : 
Java runtime environment provides the libraries used by JVM and other components
JRE = JVM + (libraries + other components)

JDK :
java development kit 
JDK = JRE + (compiler,debugger,etc.)

------------------5---------------------

TOKENS : keyword + identifier + literals + seprators + operators

------------------6---------------------

DATATYPE

VARIABLE

-------------------7--------------------

INCREMENT / DECREMENT OPERATOR

-------------------8--------------------

AND OR NOT

-------------------9----------------

    class class_name
    {
        public static void main(String[] s_name)
        {
            System.out.println("");
        }
    }

static help to call main function without any object
String ensures parameters ; can be ;String str[] or String[] str

-------------------10------------------

save java file to c\programfiles\java\bin
name same as class name
the open cmd go to c\programfiles\java\bin
write : javac file_name.java to compile( .java -> .class )
to intrepret output write : java file_name

--------------------11-------------------

the above process is chaos
to avoid we do set path

set environment variable 
click on path and edit
new and paste bin path

after which we can compile and save anywhere

---------------------12-----------------------

println to move cursor on next line
to concatenae sring and variable we use + sign

--------------------13------------------------

taking input
we can use Scanner or BufferedReader class

io package contains -> BufferedReader which contains -> readLine() to take input

    import java.io.*;
    class add{
        public static void main(String[] args)throws IOException{
            int a,b,c;
            BufferedReader br = new BufferedReader(new InputSreamReader(System.in));
            System.out.print("Enter First Number : ");
            a = Integer.parseInt(br.readLine());
            System.out.print("Enter Second Number : ");
            b = Integer.parseInt(br.readLine());
            c=a+b;
            System.out.println("Sum Of a and b is :"+c )
        }
    }
 
similarly we can use 
    Float.parseFloat(obj.readline());

------------------14-------------------------

using scanner class

util package contains -> Scanner which contains -> next(),nextInt(),nextFloat() to take input


    import java.util.Scanner;
    class add{
        public static void main(String[] args){
            int a,b,c;
            Scanner obj = new Scanner(System.in);
            System.out.print("Enter First Number : ");
            a = Integer.parseInt(obj.nextInt());
            System.out.print("Enter Second Number : ");
            b = Integer.parseInt(obj.nextInt());
            c=a+b;
            System.out.println("Sum Of a and b is :"+c )
        }
    }
