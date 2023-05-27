controls what happens to content that is too big to fit into an area.

Note: The overflow property only works for block elements with a specified height.

---
overflow: visible
By default, the overflow is visible, meaning that it is not clipped and it renders outside the element's box:

    div {
        width: 200px;
        height: 65px;
        background-color: coral;
        overflow: visible;
    }

<div style = "
  width: 200px;
  height: 45px;
  background-color: red;
  overflow: visible;
  border: 4px solid green"> Hii i am overflowing hence i am outside the container and my overflow is set to visible</div>


<br><br>

---
overflow: hidden
With the hidden value, the overflow is clipped, and the rest of the content is hidden:

    div {
        overflow: hidden;
    }

<div style = "
  width: 200px;
  height: 45px;
  background-color: red;
  overflow: hidden;
  border: 4px solid green"> Hii i am overflowing hence i am hidden inside the container and my overflow is set to visible</div>

<br><br>

---
overflow: scroll

    div {
        overflow: scroll;
    }

<div style = "
  width: 200px;
  height: 45px;
  background-color: red;
  overflow: scroll;
  border: 4px solid green"> Hii i am overflowing with a scroll bar along side to see entire me</div>

<br><br>

---
overflow: auto
same as scroll but only adds scroll bar if necessary

    div {
        overflow: auto;
    }

<div style = "
  width: 200px;
  height: 45px;
  background-color: red;
  overflow: auto;
  border: 4px solid green"> Hii i am overflowing with a scroll bar along side to see entire me</div>

<br><br>

---
overflow-x and overflow-y
The overflow-x and overflow-y properties specifies whether to change the overflow of content just horizontally or vertically (or both):

    div {
        overflow-x: auto;
        overflow-y: auto;
    }

<div style = "
  width: 40px;
  height: 100px;
  background-color: ;
  overflow-x: scroll;
  overflow-y: hidden;
  border: 4px solid green"> Hii i am overflowing with a scroll bar along side to see entire me</div>