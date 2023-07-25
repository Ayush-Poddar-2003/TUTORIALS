# 150 JQuery

The jQuery library is a single JavaScript file, and you reference it with the HTML < script > tag

Several ways to import jQuery on your web site.
- Download the jQuery library from jQuery.com
- Include jQuery from a CDN CONTENT DELIVERY NETWORKS, like Google
<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.7.0/jquery.min.js"></script>

---

# 151 

NOTE : You should always link the jQuery library before javascript to ensure complete importing

This can be done either linking both just before body close element and simply code
    $("h1").css("color","blue");
OR
if you are linking them inside head section then ensure that u use - 
The Document Ready Event
This is to prevent any jQuery code from running before the document is finished loading (is ready).

    $(document).ready(function(){
        $h1.css("color"."red"); 
    })

---

# 152

NOW THE QUESTION IS - WHAT'S INSIDE CDN LINK ?? 
Simply Js code without breaks and spaces : minified version to fast

---

# 153

    document.querySelector("h1") ; document.querySelectorAll("h1")
is same as 
    $("h1")

No differnece between selecting one and selecting many

---

# 154

    console.log($("h1").css("color")); -> will return color
    console.log($("h1").css("font-size","5px")); -> will set font-size

1 value gives output 
2 values set property 

To add a class of css to an element
    $("h1").addClass("big-title");

To remove a class of css to an element
    $("h1").removeClass("big-title");

To check a class of an element
    $("h1").hasClass("big-title");

# 155 

To change text of an element
    $("h1").text("bye");

To change inner html of an element
    $("h1").html("<i>bye</i>"); //this will not consider tags as strings

# 156

To change the attributes of an element
    $("img").attr("src","abc/ass");

# 157

To add an event listner to an element
    $("h1").click(function() {
        $("h1").css("color","yellow");
    });

To detect keys inside text box
    $("input").keypress(function(event){
        console.log(event.key);
    })

genric
    $("h1").on("click",function(event){
        $("h1").css("color","yellow");
    })

# 158 
Adding / Removing elements
    $("h1").before("<button>New</button>") This will add button without changing html code
    $("h1").after("<button>New</button>") 
    $("h1").prepend("<button>New</button>") This will add element inside h1 tag
    $("h1").append("<button>New</button>") 

# 159

    $("button").on("click",function(){
        $("h1").fade(); // can be slideUp, fadeIn, fadeOut, animate  etc
    })
   