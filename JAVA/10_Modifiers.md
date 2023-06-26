## ACCESS MODIFIERS

For **classes**, you can use either **public or default**

For **attributes, methods and constructors**, you can use

1. **public**: accessible for all classes	
2. **private**: accessible within the declared class	
3. **default**: accessible in the same package.
4. **protected**: accessible in the inherited class. 

---
## Non-Access Modifiers

For **classes**, you can use either **final or abstract**

For **attributes and methods**, you can use 

1. **final**
2. **static**
3. abstract**
4. transient**
5. synchronized**
6. volatile**

---

## Final Keyword

The final keyword in java is used to restrict the user.

- Final variables: When a variable is declared as final, its
value cannot be changed once it has been initialized. 
- Final methods: When a method is declared as final, it
cannot be overridden by a subclass.
- Final classes: When a class is declared as final, it cannot
be extended by a subclass. 

Initialization: Final variables must be initialized either at
the time of declaration or in the constructor of the class.