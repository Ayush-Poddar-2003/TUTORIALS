jQuery contains powerful methods for changing and manipulating HTML elements and attributes.

jQuery comes with a bunch of DOM related methods that make it easy to access and manipulate elements and attributes.

The W3C Document Object Model (DOM) is a platform and language-neutral interface that allows programs and scripts to dynamically access and update the content, structure, and style of a document.

---

### text( ) 
Sets or returns the text content of html element

    $("h1").text("ayush")


### html( ) 
Sets or returns whole tag content including tag

    $("h1").html("ayush")



### val( )
Sets or returns the value of form fields

    $("#btn1").click(function(){
        alert("Value: " + $("#test").val());
    });

### attr( ) 
method used to get attribute values.

    $("button").click(function(){
        alert($("#w3s").attr("href"));
    });

### append()
Inserts content at the end of the selected elements

### prepend()
Inserts content at the beginning of the selected elements

### after()
Inserts content after the selected elements

### before()
Inserts content before the selected elements

### remove()
Removes the selected element (and its child elements

### empty()
Removes the child elements from the selected element

### addClass()
Adds one or more classes to the selected elements

### removeClass()
Removes one or more classes from the selected elements

### toggleClass()
Toggles between adding/removing classes from the selected elements

### css()
Sets or returns the style attribute

    $("p").css({"background-color": "yellow", "font-size": "200%"});