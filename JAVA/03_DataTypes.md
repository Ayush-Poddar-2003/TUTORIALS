# DATATYPES -

Data types are divided into two groups:

### 1. Primitive data types - 
-  byte, short, int, long, float, double, boolean and char

### 2. Non-primitive data types - 
- String, Arrays and Classes 

---

### Number
- **byte**  : 1byte , Stores whole nos from -128 to 127
- **Short**	: 2 bytes, Stores whole nos from -32,768 to 32,767
- **int**   : 4 bytes, Stores whole nos from -2,147,483,648 to 2,147,483,647
- **long**	: 8 bytes, Stores whole nos from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807

### Point Numbers
- **Float**	: 4 bytes	; Stores fractional nos. Sufficient for storing 6 to 7 decimal digits
- **double** : 8 bytes	; Stores fractional nos, Sufficient for storing 15 decimal digits
### Others
- **boolean** : 1 bit ; Stores true or false values
- **char** : 2 bytes ; Stores a single character/letter or ASCII values
- **String**: to store a sequence of characters (text)
<BR><BR>

---

## <center>TYPECASTING

<br>

### 1. Automatically/Widening Casting : 
<br>

```java
    int a = 9;
    double b = a;  // Automatic casting: int to double
    
    System.out.println(a); //Outputs 9
    System.out.println(b); //Outputs 9.0
```
<br>



### 2. Narrowing/Manually Casting :
<br>

```java
    double b = 9.78d;
    int a = (int)b; //double to int
    
    System.out.println(b); // Outputs 9.78
    System.out.println(a); // Outputs 9
```