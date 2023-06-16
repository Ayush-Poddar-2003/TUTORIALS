throw
The throw keyword allows you to manually generate exceptions from your methods. Some of the numerous available exception types include the IndexOutOfBoundsException, IllegalArgumentException, ArithmeticException, and so on.

```java
int div(int a, int b) throws ArithmeticException {
  if(b == 0) {
    throw new ArithmeticException("Division by Zero");
  } else {
    return a / b;
  }
}
```

The throws statement in the method definition defines the type of Exception(s) the method can throw.

Next, the throw keyword throws the corresponding exception, along with a custom message.
