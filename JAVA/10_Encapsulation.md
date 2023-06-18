# <CENTER> ENCAPSULATION
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must 
- Declare class variables/attributes as private
- Use public get and set methods to access and update private variable

```JAVA
public class Person {
    private String name;

    // Getter
    public String getName() {
        return name;
    }

    // Setter
    public void setName(String newName) {
        this.name = newName;
    }
}
```