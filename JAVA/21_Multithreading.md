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
Thread is well known for its independent execution, During it's life cycle it can move from different states
1. New state (born)
2. Runnable state (Ready)
3. Running state (Execution)
4. Waiting state (BLocked)
5. End state (Exit) 

<img src = "https://www.scientecheasy.com/wp-content/uploads/2020/06/thread-life-cycle.png"></img>

---

## DAEMON THREAD
- It provides services to user threads for background supporting tasks. 
- It has no role in life than to serve user threads.
- Its life depends on user threads.
- It is a low priority thread.

The java.lang.Thread class provides two methods for java daemon thread.

    1)	public void setDaemon(boolean status) is used to mark the current thread as daemon thread or user thread.
    2)	public boolean isDaemon() is used to check that current is daemon.

```JAVA
public class TestDaemonThread1 extends Thread{  
    public void run(){  
        if(Thread.currentThread().isDaemon()){
            System.out.println("daemon thread work");  
        }  
        else{  
            System.out.println("user thread work");  
        }  
    }  

 public static void main(String[] args){  
  TestDaemonThread1 t1=new TestDaemonThread1(); 
  TestDaemonThread1 t2=new TestDaemonThread1();  
  TestDaemonThread1 t3=new TestDaemonThread1();  
  
  t1.setDaemon(true);//now t1 is daemon thread  
    
  t1.start();//starting threads  
  t2.start();  
  t3.start();  
 }  
}  

// daemon thread work
// user thread work
// user thread work
```

---

## Priority

The setPriority() method of thread class is used to change the thread's priority. Every thread has a priority which is represented by the integer number between 1 to 10.

Thread class provides 3 constant properties:

    1. MIN_PRIORITY: maximum priority, value '1'.
    2. NORM_PRIORITY: normal priority value is 5.
    3. MAX_PRIORITY: minimum priority value is 10.

```java
public class JavaSetPriorityExp1 extends Thread  
{    
    public void run()  
    {    
        System.out.println("Priority of thread is: "+Thread.currentThread().getPriority());    
    }    
    public static void main(String args[])  
    {    
        // creating one thread   
        JavaSetPriorityExp1 t1=new JavaSetPriorityExp1();    
        // print the maximum priority of this thread  
        t1.setPriority(Thread.MAX_PRIORITY);    
        // call the run() method  
        t1.start();    
    }    
}  
```

---

## SYNCHRONIZATION
A technique by which we can control multiple threads or among those threads we can one thread to enter synchronized area

Main purpose is to overcome the problems of multithreading, when multiple threads are trying to access same resource at a given timewe may lead to wrong results

TYPES- 
1. METHOD : The entire method gets synchronized so only one thread will enter in a block and other will wait
        
        public void run(){
            // Same resource
        } 

        t1.start();
        t2.start();
        t3.start();

    ```java
    class Table{  
    
        public synchronized void printTable(int n){ 
            for(int i=1;i<=5;i++){  
                System.out.println(n*i);    
            }  
        }   
    
    class MyThread1 extends Thread{  
        Table t;  
        MyThread1(Table t){  
            this.t=t;  
        }  
        public void run(){  
            t.printTable(5);  
        }  
    }

    class MyThread2 extends Thread{  
        Table t;  
        MyThread2(Table t){  
            this.t=t;  
        }  
        public void run(){  
            t.printTable(7);  
        }  
    }

    class Main{  
        public static void main(String args[]){  
            Table obj = new Table();//only one object  
            MyThread1 t1=new MyThread1(obj);  
            MyThread2 t2=new MyThread2(obj);  
            t1.start();  
            t2.start();  
        }     
    }  
    ```

2. BLOCK LEVEL

        ```JAVA
        public void hotel(){
            //code

            synchronized (this){
                mithai
                // synchronized block will let only one thread to enter in a block
            }
        }
        ```

---

## sleep method
- static method of thread class
- throws checked exception ie InterrruptedException
- puts thread into a temporary waiting state