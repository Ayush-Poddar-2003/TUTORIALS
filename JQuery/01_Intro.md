# INTRO
The jQuery library is a single JavaScript file, and you reference it with the HTML < script > tag

Several ways to import jQuery on your web site.
- Download the jQuery library from jQuery.com
- Include jQuery from a CDN, like Google
---

## Syntax

    $(selector).action()

- A $ sign to define/access jQuery
- selector find HTML elements eg
https://www.w3schools.com/jquery/trysel.asp
- action() to be performed on the element(s)

Examples:

    $("p").hide() //hides all <p> elements.
    $("#test").hide() //hides one with id="test".

---

NOTE : You should always link the library **before** javascript linking to ensure complete importing of contents of jQuery

This can be done either linking both just before body close element 

OR

if you are linking them inside head section then ensure that u use - 

## The Document Ready Event
This is to prevent any jQuery code from running before the document is finished loading (is ready).

``` javascript
$h1.css("color"."red");
// if linked just before </body>

$(document).ready(function(){
    $h1.css("color"."red"); 
})
// if linked in the head section
```
---

NOW THE QUESTION IS - WHAT'S INSIDE CDN LINK ?? 

    <script src= "https://ajax.googleapis.com/ajax/libs/jquery/3.6.4/jquery.min.js"> 
    </script>

If you head over this link than you will find that it consists of js code (minimized version) that excludes all the spaces and comments