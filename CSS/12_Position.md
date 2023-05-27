# POSITION
There are five different position values:

    static, relative, fixed, absolute, sticky
---
## position: static ;
DEFAULT : no need to mention

---
## position: relative ;
positioned relative to its default position.

Setting the top, right, bottom, and left will adjust away from its normal position.

    div.child{
        position: relative;
        left: 30px;
        border: 3px solid #73AD21;
    }

<div style = "border: 2px solid red;">
<div style = "position: relative; left: 100px; border: 3px solid #73AD21 ;margin : 5px;">Relative left to actual</div></div>

<br><br>

---

## position: fixed;
Always stays in the same place even if the page is scrolled. The top, right, bottom, and left properties are used to position the element.

    div.fixed {
        position: fixed;
        bottom: 0;
        right: 0;
        width: 300px;
        border: 3px solid #73AD21;
    }

<div style ="position: fixed; width:300px;
  border: 3px solid #73AD21; right: 0;bottom:0;">fixed position</div>

---

## position: sticky;
A sticky element toggles between relative and fixed, depending on the scroll position. 


    div.sticky {
        position: sticky;
        top: 0;
        background-color: green;
        border: 2px solid #4CAF50;
    }

<div style ="position: sticky;top: 0; padding: 5px; border: 2px solid pink; background-color:grey">sticky position</div>

---

## position: absolute;

positioned relative to the nearest positioned ancestor.

However; if an absolute positioned element has no positioned ancestors, it uses the document body, and moves along with page scrolling.

Note: Absolute positioned elements are removed from the normal flow, and can overlap elements.
<br><br>

---

# The z-index Property
When elements are positioned, they can overlap other elements.

The z-index property specifies the stack order  (front or behind.

Range : 0, 1, 2 ....

Note: z-index only works on positioned elements and flex items 

    img {
        position: relative;
        left: 0px;
        top: 0px;
        z-index: -1;
    }

<div style = "position : relative">
  <div style = "position: relative; z-index: 1;
  background-color: black; height: 100px;
  margin: 30px;">Black box (z-index: 1)</div>

  <div style = "position: absolute; z-index: 3;
  background: blue; height: 60px; width: 70%;
  left: 50px;  top: 50px;">Blue box (z-index: 3)</div>

  <div style = "position: absolute;
  z-index: 2; 
  background: green;
  width: 35%;
  left: 270px;
  top: -15px;
  height: 100px;">Green box (z-index: 2)</div>
</div>

