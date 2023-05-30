
## id Selector
**Note**: An id name cannot start with a number!!

    #id {
        property : value;
    }

---

## class Selector
**Note**: A class name cannot start with a number!

    .class {
        property : value;
    }

---
## universal Selector
(*) selects all HTML elements on the page.

    * {
        property : value;
    }

---
## Grouping Selector
The grouping selector selects in groups.

    h1, h2, p {
        property: value;
    }

---
# <div align=center>COMBINATORS</DIV>

## Descendant Selector
The descendant selector matches all elements that are descendants of a specified element, can be child, grandchild ....etc

    div p {
        background-color: yellow;
    }
    // div ke baad jitne bhi p tag

---

## Child Selector (>)
This selects direct child of an element

    div > p {
        background-color: yellow;
    }

---

## Adjacent Sibling Selector (+)

Directly after specific element, pehle ke khtm hone ke just baad waala element

    div + p {
        background-color: yellow;
    }

---

## General Sibling Selector (~)

"+" ek element krta tha, "~" mentioned tag ke khtm ke baad saare select krata + jese same

    div ~ p {
        background-color: yellow;
    }