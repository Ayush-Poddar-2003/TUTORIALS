# <center>VARIABLES

We have 3 types of variables :-
1. Local
2. Reference : created inside a class but outside method
3. Static : Similar to reference variable but shares single copy/memory, No need of object to call static members

```java
class A
{
    int a = 10; // Reference variable
    static int b = 7; // Static variable
    public static void main(String args[]){
        int c = 9; // Local variable
        System.out.println(c);

        A ref = new A();
        System.out.println(ref.a); // reference variable need object

        System.out.println(A.b); // static are accessed directly via class
    }
}
```




---
### Identifiers Naming
- Names can also begin with $ and _ 

---