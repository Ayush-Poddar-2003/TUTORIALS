# JDBC
- Java Database Connectivity. 
- Part of JavaSE (Java Standard Edition).
- An API to connect and execute the query with the database.
- The **java.sql** package contains classes and interfaces for JDBC API.
<br>
<br>


---

## WHY JDBC ?
Before JDBC, ODBC API was used to connect and execute the queries But was written in C language, That's why Java defined its own API (JDBC API) that uses JDBC drivers (written in Java language)
<br>
<br>

---
<br>

## <center>JDBC COMPONENTS
4 major components -
1. **JAVA Applications** - Can be swing, webapp or mobile app
<br>

2. **JDBC API** - allows execution of the SQL
statements also It provides various interfaces and methods to establish easy connection with different databases.
<br>

3. **JDBC Drivers** - A software component that enables java application to interact with the database. 


4. **Database**
<br>
<br>

---
<BR>

## <center>JDBC ARCHITECTURE
<BR>

### 1. Two-tier model: 
- In this model, the application interacts directly with the
source of data. 
- The JDBC driver establishes the interaction between the
data source and the application. 
- When a query is sent data source, the reply of those sent queries is sent directly to the user.
- The source of data can be located on a different machine, and that machine is connected to the user machine following a client-server
paradigm.
- Machine which is sending the query is the client
machine, and the machine that is sending the result of those queries is acting as the server

<BR>

### 2. Three-tier model: 
- In this model, the queries of the user are being sent to
the middle-tier services, from where the commands are sent again to the source of data.
- The answers to those queries are reverted to the middle tier, and from there, it is again sent to the user

<BR>

---

## <center> JDBC DRIVERS
<BR>

### 1. JDBC-ODBC bridge driver
- This converts JDBC method calls into the ODBC function calls. 
- Now discouraged because of thin driver
- **ADVANTAGES** :- Easy to use, connect to any database
- **DISADVANTAGES** :- Degraded performance, ODBC driver needs to be installed on the client machine
<br>
<br>

### 2. Native API driver
- The Native API driver uses the client-side libraries of the database.
- The driver converts JDBC method calls into native calls of the database API.
- It is not written entirely in java.
- **ADVANTAGES** :- performance upgraded than JDBC-ODBC.
- **DISADVANTAGES** :- The Native driver & The Vendor client library needs to be installed on client machine
<BR>
<BR>

### 3. Network Protocol driver
- This uses middleware (application server) that converts JDBC calls directly or indirectly
into the vendor-specific database protocol. 
- It is fully written in java
- **ADVANTAGES** :- No client side library is required
because of application server that can perform many tasks
like auditing, load balancing, logging etc.
- **DISADVANTAGES** :- 
    - Network support is required on client machine.
    - Requires database-specific coding to be done in the middle tier.
    - Maintenance becomes costly because it requires database-specific coding to be done in the middle tier
<br>
<br>

### 4. Thin Driver
- This converts JDBC calls directly into the vendor-specific
database protocol. That is why it is known as thin driver. 
- It is fully written in Java language
- **ADVANTAGES** : Better performance than all other 
drivers. No software is required at client side or 
server side
- **DISADVANTAGES** : Drivers depend on the Database

---

```java
package myPackage;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;

public class Main {
    public void createDatabase(){
        try{
            // 1. loading driver not done nowadays

            // 2. connection establishement
            String url = "jdbc:mysql://localhost:3306/";
            String userName = "root";
            String password = "Mysql@1603";
            Connection conn = DriverManager.getConnection(url, userName, password);

            // 3. creating statement
            Statement stm = conn.createStatement();

            // 4. create query
            String query = "create database AyushPoddar";
            stm.execute(query);
            System.out.println("Database created successfully");

            //5. closing the connection
            conn.close();
        }
        catch(Exception e){
            e.printStackTrace();
        }
    }
}
```

---

### DriverManager class
The DriverManager class is the component of JDBC API and also a member of the java.sql package. The DriverManager class acts as an interface between users and drivers. It keeps track of the drivers that are available and handles establishing a connection between a database and the appropriate driver. It contains all the appropriate methods to register and deregister the database driver class and to create a connection between a Java application and the database. The DriverManager class maintains a list of Driver classes that have registered themselves by calling the method DriverManager.registerDriver(). Note that before interacting with a Database, it is a mandatory process to register the driver; otherwise, an exception is thrown.