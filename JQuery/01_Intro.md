# INTRO
The jQuery library is a single JavaScript file, and you reference it with the HTML < script > tag

There are several ways to import jQuery on your web site.
- Download the jQuery library from jQuery.com
- Include jQuery from a CDN, like Google
---

## Syntax

    $(selector).action()

- A $ sign to define/access jQuery
- selector find HTML elements
- action() to be performed on the element(s)

Examples:

    $("p").hide() - hides all <p> elements.
    $("#test").hide() - hides the element with id="test".

---

NOTE : You should always link the library before linking js file to ensure complete importing of contents of jQuery

This can be done either linking both just before body element 

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
