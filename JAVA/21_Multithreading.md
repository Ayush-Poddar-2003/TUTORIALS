## THREAD
- A pre-defined class which is available in Java.lang package
- Basic unit of CPU
- Well known for independent execution

### How to create Thread in Java ?
1. By Extending Thread class
2. By Implementing Runnable Interface

## Using Thread class
```java
class A extends Thread{
    // thread 1
    public void run(){  //run() in used by default
        for(int i=0;i<5;i++)
        {
            System.out.println("Ayush");
        }
    }
}

public class Demo{
    public static void main(String args[]){
        A aa = new A();
        aa.start(); //start() is used to call run()
        
        // thread 2 of main
        for(int i=0;i<5;i++){
            System.out.println("Aditi");
        }
    }
}

// If we want to delay execution time use sleep method with try and catch methods
```

## Using Runnable Interface

```java

class A implements Runnable{
    public void run()
    {
        // Thread job 
        for(int i=0;i<5;i++)
        {
            System.out.println("child thread");
        }
    }
}

class B{
    public static void main(String args[]){
        A aa = new A();
      // aa.start() wont run as we dont have used thread class
        Thread t = new thread(aa);
        t.start();
    }
}

```

---

## THREAD LIFE CYCLE

1. New state (born)
2. Runnable state (Ready)
3. Running state (Execution)
4. Waiting state (BLocked)
5. End state (Exit) 