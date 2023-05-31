
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

<<<<<<< HEAD
---
Descendant Selector
The descendant selector matches all descendants of a specified element, can be grand great grand etc
=======
## Descendant Selector
The descendant selector matches all elements that are descendants of a specified element, can be child, grandchild ....etc
>>>>>>> 7872c76b6a37ce1c3bf748aa34f1c3fd7bc360e9

<<<<<<< HEAD
div p {
  background-color: yellow;
}

Child Selector (>)
The child selector selects all elements that are the children of a specified element, no grand child only direct child

div > p {
  background-color: yellow;
}

Adjacent Sibling Selector (+)
The adjacent sibling selector is used to select an element that is directly after another specific element.

div + p {
  background-color: yellow;
}

General Sibling Selector (~)
The general sibling selector selects all elements that are next siblings of a specified element

+ selects only one after specified element but ~ selects all after elements


=======
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
>>>>>>> 7872c76b6a37ce1c3bf748aa34f1c3fd7bc360e9