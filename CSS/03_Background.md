## background-color

### Opacity / Transparency
The opacity property specifies the opacity/transparency of an element. It can take a value from 0.0 - 1.0. The lower value, the more transparent:

    div {
          background-color: green;
          opacity: 0.5;
    }

<div style ="background-color: green; opacity: 0.5;">hii</div>

<br>

---

## background-image

to insert background image use 

    body {
          background-image: url("paper.gif");
        }


<br>

### background-repeat

By default, the background-image property repeats an image both horizontally and vertically.

To repeat vertically, background-repeat: repeat-y;

To repeat  horizontally, background-repeat: repeat-x;

for no repeat, background-repeat: no-repeat

    body {
        background-image: url("paper.gif");
        background-repeat: no-repeat;
        background-repeat: repeat-x;
        background-repeat: repeat-y;
    }

<br>

### background-attachment
The background-attachment property specifies whether the background image should scroll or be fixed (will not scroll with the rest of the page):

    body {
        background-image: url("img_tree.png");
        background-attachment: fixed;
        background-attachment: scroll;
    }

---

# BACKGROUND SHORTHAND

When using the shorthand property the order of the property values is:

- background-color
- background-image
- background-repeat
- background-attachment
- background-position

SYNTAX

    body {
        background: #000000 url("tree.png") no-repeat right top;
    }