# The position Property
The position property specifies the type of positioning method used for an element.

There are five different position values:

- static
- relative
- fixed
- absolute
- sticky

---
## position: static;

HTML elements are positioned static by default.

Static positioned elements are not affected by the top, bottom, left, and right properties.

---
## position: relative;
An element with position: relative; is positioned relative to its normal position.

Setting the top, right, bottom, and left properties of a relatively-positioned element will adjust it from its normal position. 


    div.relative {
        position: relative;
        left: 30px;
    }

---
## position: fixed;
An element with position: fixed;
which means it always **stays in the same place even if the page is scrolled**. 

The top, right, bottom, and left properties are used to position the element.

    div.fixed {
        position: fixed;
        bottom: 0;
        right: 0;
    }

---
## position: absolute;
They are changed wrt relative container

However; if an absolute positioned element has no positioned ancestors, it uses the document body, and moves along with page scrolling.

Note: Absolute positioned elements are removed from the normal flow, and can overlap elements.

    div.relative {
        position: relative;
    }


    div.absolute {
        position: absolute;
        top: 80px;
        right: 0;
    }

---
## position: sticky;

An element with position: sticky; is positioned based on the user's scroll position.

A sticky element toggles between relative and fixed, depending on the scroll position. It is positioned relative until a given offset position is met in the viewport - then it "sticks" in place (like position:fixed).

div.sticky {
  position: -webkit-sticky; /* Safari */
  position: sticky;
  top: 0;
  background-color: green;
  border: 2px solid #4CAF50;
}


