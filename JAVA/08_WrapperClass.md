Wrapper classes provide a way to use primitive data types as objects as java is 99% oops

    int -> Integer
    char -> Character
    byte -> Byte
    short -> Short
    long -> Long
    float -> Float
    double -> Double
    boolean -> Boolean

---

## Use of wrapper class
- Change the value in Method: Java supports only call by value. So, if we pass a primitive value, it will not change the original value. But, if we convert the primitive value in an
object, it will change the original value.
- java.util package: The java.util package provides the utility classes to deal with objects.
- Collection Framework: Java collection framework works with objects only. All classes of the collection framework
- Serialization: We need to convert the objects into streams to perform the serialization. If we have a primitive value, we can convert it in objects through the wrapper classes.
- Synchronization: Java synchronization works with objects in Multithreading.
(ArrayList, LinkedList, Vector, HashSet, LinkedHashSet, TreeSet, PriorityQueue, ArrayDeque, etc.) deal with objects only.

---

```java
int y = 10;
String str = "5";

y = str      // will give error
y = (int)str // will give error

// Bcoz We are putting greater thing in small container        

// also when we take input from user we take it in text box in form of string and to perform computation we need wrapper class

y = Integer.parseInt(str) //Correct

// To create objects use
Integer a = new Integer(5);

// We can assign null to objects

int a = null // INVALID
Integer a = null // VALID
```
<br>

## AUTOBOXING

```java
int a = 5;
double b = 5.5;

Integer aa = Integer.valueof(a);
Double bb = Double.valueof(b);
```

## UNBOXING
```JAVA
Integer aa = Integer.valueof(5);
Double bb = Double.valueof(5.5);

int a = aa.intValue()
double b = bb.doubleValue()
```