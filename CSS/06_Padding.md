# CSS Padding

Space inside border

## Padding - Shorthand Property

    div {
        padding: 25px 50px 75px 100px;
    }
<br>

---
## BORDER-BOX


    div {
        width: 300px;
        padding: 25px;
    }

ISSUE : Here we gave width as 300 px but the width will be 350px due to addition of padding.

To keep the width at 300px, no matter the amount of padding, you can use the **box-sizing property**. This causes the element to maintain its actual width; if you increase the padding, the available content space will decrease.

    div {
        width: 300px;
        padding: 25px;
        box-sizing: border-box;
    }

<div style = "width: 300px; padding: 25px; border : 1px solid red">without exceeded 300</div>
<br>
<div style = "width: 300px; padding: 25px; box-sizing: border-box; border : 1px solid red">No matter what happens it doesn't let you increase width beyond 300</div>