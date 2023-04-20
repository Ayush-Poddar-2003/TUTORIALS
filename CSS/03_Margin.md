# Margin - 

Margins are used to create space around elements, outside of any defined borders.

CSS has properties for specifying the margin for each side of an element:
- margin-top, margin-right, margin-bottom, margin-left
<br><br>

All the margin properties can have the following values:
- **auto** - the browser calculates the margin
- **length** - specifies a margin in px, pt, cm, etc.
- **%** - specifies a margin in % of the width of the containing element
- **inherit** - specifies that the margin should be inherited from the parent element



        p {
            margin-top: 100px;
            margin-bottom: 100px;
            margin-right: 150px;
            margin-left: 80px;
        }

# Margin - Shorthand Property

    p {
        margin: 25px 50px 75px 100px;
    }

If the margin property has three values:

margin: 25px 50px 75px;<br>
top margin is 25px,
right and left margins are 50px,
bottom margin is 75px
<br><br><br>


# The auto Value

You can set the margin property to auto to horizontally center the element within its container.

    div {
        margin: auto;
        border: 1px solid red;
    }

The element will then take up the specified width, and the remaining space will be split equally between the left and right margins.<br><br><br>

# The inherit Value
This example lets the left margin of the < p class="ex1" > element be inherited from the parent element (< div>):

    div {
        border: 1px solid red;
        margin-left: 100px;
    }

    p {
        margin-left: inherit;
    }