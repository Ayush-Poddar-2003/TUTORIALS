# JavaScript Output

Since To access an HTML element, JavaScript can use the document.getElementById(id) method.
<br>

---

## 1. Using innerHTML

    <script>
    document.getElementById("demo").innerHTML="Hii";
    </script>


=> This will display "hii" to html output where element id was demo <br><br>

---
## 2. Using document.write()

<br>For testing purposes, it is convenient to use document.write()

NOTE : Using document.write() after an HTML document is loaded, will OVERWRITE all existing HTML:

    <button type="button" onclick = "document.write("hii")">Try it</button>
<br>

---
## 3. Using window.alert()

<br>You can use an alert box to display data:


    <script>
    window.alert(5 + 6);
    </script>



---
## 4. Using console.log()

<br>For debugging purposes, you can call the console.log() method in the browser to display data.<br>

---
## 5. JavaScript Print

<br>JavaScript does not have any print object or print methods.

You cannot access output devices from JavaScript.

The only exception is that you can call the window.print() method in the browser to print the content of the current window.

    <button onclick="window.print()">Print this page</button>


