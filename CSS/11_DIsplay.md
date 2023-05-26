# Block-level Elements
Always starts on a new line and takes up the full width.

Examples of block-level elements:

    <div>
    <h1> - <h6>
    <p>
    <form>
    <header>
    <footer>
    <section>

# Inline Elements
Does not start on a new line and only takes up as much width as necessary.

Examples of inline elements:

    <span>
    <a>
    <img>
<br>

---
### Override The Default Display Value

    span {
        display: block;
    }

---
### Hide an Element
used with js to hide without deleting or adding

    h1.hidden {
        display: none;
    }
    
    //or

    h1.hidden {
        visibility: hidden;
    }