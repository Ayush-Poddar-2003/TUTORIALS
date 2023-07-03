## ACCESS MODIFIERS

For **classes**, you can use either **public or default**

For **attributes, methods and constructors**, you can use

1. **public**: accessible for all classes	
2. **private**: accessible within the declared class	
3. **default**: accessible in the same package.
4. **protected**: accessible in the inherited class. 

---
## Non-Access Modifiers

For **classes**, you can use either **final or abstract**

For **attributes and methods**, you can use 

1. **final**
2. **static**
3. abstract**
4. transient**
5. synchronized**
6. volatile**

<br><br>

---

## <center>Final Keyword

The final keyword in java is used to restrict the user.

- **Final variables**: When a variable is declared as final, its
value cannot be changed once it has been initialized. 
- **Final methods:** When a method is declared as final, it
cannot be overridden by a subclass.
- **Final classes:** When a class is declared as final, it cannot
be extended by a subclass. 


---

Ques :  Is final method inherited?
- Yes, final method is inherited but you cannot override it

Ques : Can we initialize blank final variable?
- Yes, but only in constructor

        class Bike {  
            final int speedlimit;  
            
        Bike() {  
            speedlimit = 70;  
            System.out.println(speedlimit);  
        } 

<br>
<br>

---

## <center>this keyword

USES :-
1. Refers to same address as of object
```java
class A {
    void demo(){
        System.out.println(this);
    }
    public static void main(String args[]){
        A aa = new A();
        System.out.println(aa);
        aa.demo();
    }
}
```

2. To use instance variable when we have same name for both local and instance variable


3. To call default/parametrized constructor

```java
class A{
    A(){
        System.out.println("Default");
    }
    A(int a){
        this(); // to call default constructor
        System.out.println(a);
    }
    public static void main(String args[]){
        A aa = new A(100);
    }
}
```