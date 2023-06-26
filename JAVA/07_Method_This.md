# Methods


Java supports only call by value. So, if we pass a primitive value, it will not change the original value. But, if we convert the primitive value in an object, it will change the original value.


### Call by Value

```JAVA
class Operation
{  
    int data=50;  
    
    void change(int data){  
        data = data+100;
    }  
     
    public static void main(String args[]){  
        Operation op=new Operation();  
        System.out.println("before change "+op.data);  
        op.change(500);  
        System.out.println("after change "+op.data);  
 }  
}  
// before change 50 
// after change 50
```
### Call by ~ reference
 
```JAVA
class Operation
{  
    int data=50;  
    
    void change(Operation op){  
        op.data = op.data+100;
    }  
     
    public static void main(String args[]){  
        Operation op=new Operation();  
        System.out.println("before change "+op.data);  
        op.change(op);  
        System.out.println("after change "+op.data);  
 }  
}  
// before change 50 
// after change 150
```
<br>
Can we overload main() method?
 Yes, by method overloading. You can have any number of 
main methods in a class by method overloading
<br>
<br>

---

```java
// to verify the value 
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

```java

```

3. To call default constructor

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