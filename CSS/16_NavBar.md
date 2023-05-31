## Navigation Bar 

It is nothing but List of Links

    // Mandatry step
    ul {
        list-style-type: none;
    }

There are 2 ways to create a horizontal navigation bar. <br><br>

## 1. Inline 


    li {
        display: inline;
    }


<ul style = "  list-style-type: none;
  margin: 0;
  padding: 0;
}">
  <li style = "display: inline;"><a>Home</a></li>
  <li style = "display: inline;"><a>News</a></li>
  <li style = "display: inline;"><a>Contact</a></li>
  <li style = "display: inline;"><a>About</a></li>
</ul> <br>

---

## 2. Float

    li {
        float: left;
    }

    li a {
        display: block; 
        overflow : hidden;
    }
        // a is block in container 
           to ensure whole block is clickable also
           to use padding, margin properties
        // overflow hidden 
           to ensure doesn't goes out of box

<ul style = "list-style-type: none; margin: 0; padding: 0; ">
  <li style = "float: left;"><a style = "display: block; padding: 8px; background-color: black">Home</a></li>
  <li style = "float: left;"><a style = "display: block; padding: 8px; background-color: black">News</a></li>
  <li style = "float: left;"><a style = "display: block; padding: 8px; background-color: black">Contact</a></li>
  <li style = "float: left;"><a style = "display: block; padding: 8px; background-color: black">About</a></li>
</ul> 

<br><br>

Tip: Add the background-color to ul instead of each < a > element if you want a full-width background color:

