# INHERITENCE
We group the "inheritance concept" into two categories:

- Subclass (child) - the class that inherits 
- Superclass (parent) - the class being inherited 

```JAVA
class Vehicle {
  protected String brand = "Ford";   

  public void honk() {                    
    System.out.println("Tuut, tuut!");
  }
}

class Car extends Vehicle {
  private String modelName = "Mustang"; 

    public static void main(String[] args) {
        Car myCar = new Car();
        myCar.honk();
  }
}
```