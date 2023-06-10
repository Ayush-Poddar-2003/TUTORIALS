## <center>USER INPUT

The **Scanner** class is used to get user input, and it is found in the **java.util** package.

```java
import java.util.Scanner; 

class Main {
  public static void main(String[] args) 
  {
    Scanner sc = new Scanner(System.in);

    String a = sc.nextLine(); 
    int b = sc.nextInt()
    double c = sc.nextDouble();
  }
}
```