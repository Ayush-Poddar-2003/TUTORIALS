# Float 
used for positioning and formatting content, the float property can be used to wrap text around images.

- none - The element does not float (default)
- left - Element floats to left of container
- right - To the right of its container
- inherit - The element inherits the float value of its parent

---

    img {
        float: none;  //or
        float: left;  //or
        float: right; 
    }

<br>

---
# Clear
If we want the next element after using float property below, use the clear property.
It specifies what should happen with the element that is next to a floating element.

- none - Element is not pushed below left or right (default)
- left - The element is pushed below left floated elements
- right - The element is pushed below right floated elements
- both - The element is pushed below both left and right floated elements
- inherit - The element inherits the clear value from its parent

When clearing floats, you should match the clear to the float: If an element is floated to the left, then you should clear to the left. Your floated element will continue to float, but the cleared element will appear below it on the web page.

    // WITHOUT CLEAR

    .div1 {
        float: left;
        border: 3px solid #73AD21;
    }

    .div2 {
        border: 3px solid red;
    }

<div style="float: left;
  border: 3px solid #73AD21;">div1</div>
<div style="  
  border: 3px solid red;">div2 - Notice that div2 is after div1 in the HTML code. However, since div1 floats to the left, the text in div2 flows around div1.</div>
<br><br>

    //WITH CLEAR LEFT
    
    .div2 {
        border: 3px solid red;
        clear: left;
    }

<div style="float: left;
  border: 3px solid #73AD21;">div1</div>
<div style="  
  border: 3px solid red;clear: left">div2 - Notice that div2 is after div1 in the HTML code. However, since div1 floats to the left, the text in div2 flows around div1.</div>
<br><br>

    //WITH CLEAR RIGHT
    .div1 {
        float: right;  // MAKE SURE BOTH ARE RIGHT
        border: 3px solid #73AD21;
    }    
    .div2 {
        border: 3px solid red;
        clear: right;
    }

<div style="float: right;
  border: 3px solid #73AD21;">div1</div>
<div style="  
  border: 3px solid red;clear: right">div2 - Notice that div2 is after div1 in the HTML code. However, since div1 floats to the left, the text in div2 flows around div1.</div>
<br><br>

---

## The clearfix Hack
If a floated element is taller than the containing element, it will "overflow" outside of its container. 

    .clearfix {
        overflow: auto;
    }