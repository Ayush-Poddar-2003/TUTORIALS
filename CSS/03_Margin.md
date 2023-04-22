# Margin - 

Margins are used to create space around elements, **outside of any defined borders**.

We can specify the margin for each side of an element:
- margin-top, margin-right, margin-bottom, margin-left
<br>

        p {
            margin-top: 100px;
            margin-bottom: 100px;
            margin-right: 150px;
            margin-left: 80px;
        }

## Margin - Shorthand Property

    p {
        margin: 25px 50px 75px 100px;
    }

If the margin property has three values:

margin: 25px 50px 75px;<br>
top margin is 25px,
right and left margins are 50px,
bottom margin is 75px
<br><br><br>

---
# Margin Values
All the margin properties can have the following values:
- **length** - specifies a margin in px, pt, cm, etc.
- **%** - specifies a margin in % of the width of the containing element
- **auto** - the browser calculates the margin
- **inherit** - specifies that the margin should be inherited from the parent element
<br><br>

## The auto Value

To horizontally center the container **not inside elements.**

    div {
        margin: auto;
        border: 1px solid red;
    }



## The inherit Value
Jitna container ka margin utna hi uske andr ke alement ka w.r.t. the container

    .par {
        border: 1px solid red;
        margin-left: 100px;
    }

    p.par {
        margin-left: inherit;
    }

<br>

---

# Margin Collapse
Top and bottom margins of elements are sometimes collapsed into a single margin that is equal to the largest of the two margins.

This does not happen on left and right margins! Only top and bottom margins!

    h1 {
    margin: 0 0 50px 0;
    }

    h2 {
    margin: 20px 0 0 0;
    }

In this example the h1 element has a bottom margin of 50px and the h2 element has a top margin of 20px. So, the vertical margin between h1 and h2 should have been 70px (50px + 20px). However, due to margin collapse, the actual margin ends up being 50px.
