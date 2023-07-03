# EXCEPTION
An exception is unexpexted/unwanted/abnormal situation that occured at runtime

**Throwable class** is the root class of exception hierarchy consists of two sub classes - Exception and Error

<img src = "https://data-flair.training/blogs/wp-content/uploads/sites/2/2018/04/hierarchy-of-java-exceptions.webp">
<br>

---

Exception handling consists of try, catch, throw, throws, finally 

```java

```

## throw
- to throw a customized exception object explicitly
- present inside method body
- one exception at a time
- followed by an instance


## throws
- to declare an exception and bypass the caller
- used with method signature
- multiple exceptions
- followed by a class

```java
class Test
{
  void div(int a, int b) throws ArithemeticException
  {
    if(b==0)
    {
      throw new ArithemeticException();
    }
    else
    {
      int c=a/b;
      System.out.println(c);
    }
  }

  public static void main(String args[])
  {
    Test tt = new Test;
    try{
      tt.div(5,0);
    }
    catch(Exception e){
      System.out.println("Can't divide by 0")
    }
}
```

Checked exceptions : by compiler, commnly occur

