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

1. **final**: 
2. **static**: 
3. abstract**
4. transient	Attributes and methods are skipped when serializing the object containing them
5. synchronized	Methods can only be accessed by one thread at a time
6. volatile	The value of an attribute is not cached thread-locally, and is always read from the "main memory"