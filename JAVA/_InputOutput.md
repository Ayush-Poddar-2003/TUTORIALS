The **java.io** package contains all the classes required for input and output operations.

## STREAM
A stream is a sequence of data, composed of bytes.

In Java, 3 streams are created automatically, All these streams are attached with the console.

1. System.in : To read characters from standard input device
2. System.out : To produce the result of a program 

    Various print functions that uses output statements

        print() - cursor remains at the end of the text
        println()- cursor to next line
        printf() - take multiple arguments

3. System.err : To output all the error data that a program might throw.

---
<br>

## TYPES OF STREAMS BASIS OF OPERATIONS
### 1. Input Stream: 
These streams are used to read data that must be taken as an input from a source. 

### 2. Output Stream:
These streams are used to write data as outputs
<br>
<br>

---

## TYPES OF STREAMS CLASSES BASIS OF FILE TYPE
<br>

### 1. BYTE STREAM
- To read bytes from the input stream and write bytes to the output stream
- To read/write the data of 8-bits.
- These classes are part of the java.io package.

#### 1.1 InputStream
- superclass of all the input stream classes
- abstract class and can't be instantiated
- various classes inherit the InputStream class and override its methods

#### 1.2 OutputStream
- superclass of all the output stream classes
- an abstract class used to write 8-bit bytes to the stream
<br>
<br>
<br>

### 2. CHARACTER STREAM
- To overcome the limitations of ByteStream classes,
which can only handle the 8-bit bytes and is not
compatible to work directly with the Unicode
characters.
- used to work with 16-bit Unicode characters. 
- They can perform operations on characters, char arrays and String
- mainly used to read characters from the source and write them to the destination

#### 2.1 Reader Class
- Abstract class and can’t be instantiated
- All methods of the Reader class throw an IOException

#### 2.2 Writer Class
- Abstract class and can’t be instantiated
- All methods of the writer class throw an IOException

---
<br>
<br>

|                                  **BYTE STREAM**                                  |                                 **CHARACTER STREAM**                                 |
|:---------------------------------------------------------------------------------:|:------------------------------------------------------------------------------------:|
| byte-oriented.                                                                    | character-oriented.                                                                  |
| Access the file byte by byte                                                      | Read a file character by character                                                   |
| end with the suffix InputStream or OutputStream                                   | Ends with suffix Reader or Writer                                                    |
| Classified into 1.InputStream classes 2.OutputStream classes                      | Classified into 1.Reader class 2.Writer class                                        |
| Possible to translate character stream into byte stream with OutputStream Writer. | Possible to translate the byte stream into a character stream with InputStreamReader |