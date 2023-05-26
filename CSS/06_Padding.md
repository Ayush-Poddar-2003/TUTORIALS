# CSS Padding
The CSS padding properties are used to generate space around an element's content, **inside of any defined borders**.

CSS has properties for specifying the padding for each side -

    padding-top, padding-right, padding-bottom, padding-left

## Padding - Shorthand Property

    div {
        padding: 25px 50px 75px 100px;
    }

---
All the padding properties can have the following values:

- **length** - specifies a padding in px, pt, cm, etc.
- **%** - specifies a padding in % of the width of the containing element
- **inherit** - specifies that the padding should be inherited from the parent element
<br>
<br>

---
## Padding and Element Width


    div {
        width: 300px;
        padding: 25px;
    }

Here we gave width as 300 px but the width will be 350px due to addition of padding.

To keep the width at 300px, no matter the amount of padding, you can use the box-sizing property. This causes the element to maintain its actual width; if you increase the padding, the available content space will decrease.

    div {
        width: 300px;
        padding: 25px;
        box-sizing: border-box;
    }