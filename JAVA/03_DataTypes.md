# DATATYPES -

Data types are divided into two groups:

### 1. Primitive data types - 
includes byte, short, int, long, float, double, boolean and char

### 2. Non-primitive data types - 
includes String, Arrays and Classes 

---

### Integer
- byte  : Stores whole numbers from -128 to 127
- Short	: 2 bytes, Stores whole numbers from -32,768 to 32,767
- int   : 4 bytes, Stores whole numbers from -2,147,483,648 to 2,147,483,647
- long	: 8 bytes, Stores whole numbers from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807

### Rational
- Float	: 4 bytes	; Stores fractional numbers. Sufficient for storing 6 to 7 decimal digits
- double : 8 bytes	; Stores fractional numbers, Sufficient for storing 15 decimal digits
### boolean	
- 1 bit	; Stores true or false values
### char	
- 2 bytes	; Stores a single character/letter or ASCII values

### String
- to store a sequence of characters (text)
<BR><BR>

---

# TYPECASTING

In Java, there are 2 types of casting:

- Widening Casting (automatically) - converting a smaller type to a larger type size

        public class Main {
        public static void main(String[] args) {
            int myInt = 9;
            double myDouble = myInt; // Automatic casting: int to double

            System.out.println(myInt);      // Outputs 9
            System.out.println(myDouble);   // Outputs 9.0
        }
        }

- Narrowing Casting (manually) - converting a larger type to a smaller size type

- Narrowing casting must be done manually by placing the type in parentheses in front of the value:

        public class Main {
        public static void main(String[] args) {
            double myDouble = 9.78d;
            int myInt = (int) myDouble; // Manual casting: double to int

            System.out.println(myDouble);   // Outputs 9.78
            System.out.println(myInt);      // Outputs 9
        }
        }
