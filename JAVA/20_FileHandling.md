// WAP TO DISPLAY INFORMATION ABOUT FILE
```java
import Java.io.File
public class Demo{
    public static void main(String args[]){

        File f = new File("C:Users\\Ayush\\Desktop\\ABC.txt");

        if(f.exists())
        {
            System.out.println("File name is : "+f.getName());
            System.out.println("File path is : "+f.getLocation());
            System.out.println("Is File Readable : "+f.canRead());
            System.out.println("Is File writable : "+f.canWrite());
            System.out.println("File size is : "+f.length());
            System.out.println("File removed : "+f.delete());
        }
        else
        {
            System.out.println("File doesn't exists")
        }
    }
}
```
// WAP TO WRITE ON FILE
```java
import Java.io.*
public class Demo{
    public static void main(String args[]){
        
        try{
            FileWriter f = new File("C:Users\\Ayush\\Desktop\\ABC.txt");
            try{
                f.write("Ayush is hotty");
            }
            finally{
                f.close();
            }
            System.out.println("Great Success");
        }
        catch(IOException i){
            System.out.println(i);
        }
    }
}
```
// WAP TO DISPLAY CONTENT OF A FILE
```java
import Java.io.File
public class Demo{
    public static void main(String args[]){

        File f = new File("C:Users\\Ayush\\Desktop\\ABC.txt");

        if(f.exists())
        {
            System.out.println("File name is : "+f.getName());
            System.out.println("File path is : "+f.getLocation());
            System.out.println("Is File Readable : "+f.canRead());
            System.out.println("Is File writable : "+f.canWrite());
            System.out.println("File size is : "+f.length());
            System.out.println("File removed : "+f.delete());
        }
        else
        {
            System.out.println("File doesn't exists")
        }
    }
}
```

// WAP TO COPY CONTENT OF ONE FILE TO ANOTHER FILE

```JAVA
import java.io.*;

class copyFile{
    public static void main(String args[]) throws IOException {

        FileInputStream r = new FileInputStream("C:\\Desktop\\ABC.text");
        FileOutputStream w = new FileOutputStream("C:\\Desktop\\DEF.text");

        int i;
        while((i = r.read())! = -1)
        {
            w.write((char)i)
        }
    System.out.prinln("Copied");
    }
}
```