## background-color

### Opacity / Transparency
The opacity property specifies the opacity/transparency of an element. It can take a value from 0.0 - 1.0. The lower value, the more transparent:

    div {
          background-color: green;
          opacity: 0.3;
    }

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

To repeat vertically, set background-repeat: repeat-y;

To repeat  horizontally, set background-repeat: repeat-x;

for no repeat, set background-repeat: no-repeat

    body {
        background-image: url("paper.gif");
        background-repeat: no-repeat;
    }

<br>

### background-attachment
The background-attachment property specifies whether the background image should scroll or be fixed (will not scroll with the rest of the page):

    body {
        background-image: url("img_tree.png");
        background-repeat: no-repeat;
        background-attachment: fixed;
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