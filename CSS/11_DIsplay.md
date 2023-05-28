# Block-level Elements
Always starts on a new line and takes up the full width.

Examples of block-level elements:

    <div>, <h1> - <h6>, <p>, <form>, <header>, <footer>, <section>

<br>

# Inline Elements
Does not start on a new line and only takes up as much width as necessary.

Examples of inline elements:

    <span>, <a>, <img>,
<br><br>


# Inline-block
Allows to set width and height as **display:inline** doesn't.

Top and bottom margins/paddings are respected, but with display: inline they are not. i.e. it doesn't overlaps.

Does not add a line-break after the element


    ABC {
        display: block;  // or
        display: inline;  //or
        display: inline-block;
    }

<br><br>

---


<div >So here we have a <span class="a" style = "  display: inline;
  width: 100px;
  height: 100px;
  padding: 5px;
  border: 1px solid blue;  
  background-color: blue;
  padding: 16px ">inline</span> element which overlaps the content if padding/margin increases also it doesn't follows height-width properties <br><br>


<div >So here we have an <span class="a" style = "  display: inline-block;
  width: 100px;
  height: 100px;
  padding: 5px;
  border: 1px solid blue;  
  background-color: blue;
  text-align: center;
  padding: 16px ">inline-block</span> element which doesn't overlaps the content if padding/margin increases and follows height width.

<div >So here we have an <span class="a" style = "  display: block;
  width: 100px;
  height: 100px;
  padding: 5px;
  border: 1px solid blue;  
  background-color: blue;
  text-align: center;
  padding: 16px ">block</span> element which doesn't overlaps the content if padding/margin increases and follows height width.

<br><br>

---

### To Hide an Element
Generally used with js to hide without deleting or adding

    h1 {
        display: none;
        //or
        visibility: hidden;
    }