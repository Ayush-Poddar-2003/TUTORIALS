# BORDER


## border-style

- To use any border styling **border-style** property is used prior
- Atrributes : 

  - dotted 
  - dashed
  - solid
  - double 
  - none 
  - hidden
<!-- these are further 3d borders -->
  - groove
  - ridge
  - inset 
  - outset

We can use multiple atrributes too !!

        div {
          border-style: dotted dashed solid double;
        }

<br>

---
## border-width

- The border-width property specifies the width of the four borders.
- The width can be set as a specific size (px, pt, cm, em, etc)

      p {
        border-style: solid;
        border-width: 5px 20px; 
      }

---
## border-color

- The border-color property is used to set the color of the four borders.
- If border-color is not set, it inherits the color of the element.

      p.one {
        border-style: solid;
        border-color: red;
      }

---


## SHORTHAND PROPERTY

- The **border** property is a shorthand property for the following individual border properties:

      border-style (compulsion)
      border-width
      border-color

eg

      p {
        border: 5px solid red;
      }

---
## Rounded Borders

- The border-radius property is used to add rounded borders to an element:

      p {
        border: 2px solid red;
        border-radius: 5px;
      }