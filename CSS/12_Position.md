There are five different position values:

static
relative
fixed
absolute
sticky

---
## position: static ;
Not positioned in any special way; it is always positioned according to the normal flow of the page:

---
## position: relative ;
An element with position: relative; is positioned relative to its normal position.

Setting the top, right, bottom, and left properties will cause it to be adjusted away from its normal position. Other content will not be adjusted to fit into any gap left by the element.

    div{
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

