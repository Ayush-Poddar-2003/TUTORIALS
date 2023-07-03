## GARBAGE COLLECTION
- In java, garbage means unreferenced objects.
- Garbage Collection is process of reclaiming the runtime unused memory automatically OR 
- A way to destroy the unused objects.

---

### How can an object be unreferenced?

1 By nulling an object:
        
    Employee e = new Employee();  
    e = null;  

2 By anonymous object:

    new Employee();  

3 gc( ) method
- The gc() method is used to invoke the garbage
collector to perform cleanup processing.
- Found in System & Runtime classes.
- Performed by a thread called Garbage Collector(GC).
- This thread calls the finalize() method before object is garbage collected.

---

4 finalize method()

- defined in java.lang.Object
- finalize is a protected method of object super class
- Purpose is to release the resources that is allocated by unused object
---

```JAVA
public class TestGarbage1{  
    public void finalize(){
        System.out.println("object is garbage collected");
    }  
    public static void main(String args[]){  
        TestGarbage1 s1 = new TestGarbage1();  
        TestGarbage1 s2 = new TestGarbage1();  
        s1 = null;  
        s2 = null;  

        System.gc();  
   } 
}  
```

