# Block-level Elements
Always starts on a new line and takes up the full width.

Examples of block-level elements:

    <div>, <h1> - <h6>, <p>, <form>, <header>, <footer>, <section>

# Inline Elements
Does not start on a new line and only takes up as much width as necessary.

Examples of inline elements:

    <span>, <a>, <img>,
<br>

---
### To change The Default Display Value

    ABC {
        display: block;
        // or
        display: inline;
    }

---
### To Hide an Element
Generally used with js to hide without deleting or adding

    h1 {
        display: none;
        //or
        visibility: hidden;
    }