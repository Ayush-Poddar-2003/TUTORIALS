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

---
