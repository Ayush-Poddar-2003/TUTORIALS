# BORDER


## border-style

NOTE : To use any styling **"border-style"** property is used prior

Atrributes : 
solid, dotted, dashed, double, none, hidden

3D : groove, ridge, inset, outset

We can use multiple atrributes too !!

        div {
          border-style: dotted dashed solid double;
        }

<div style="border-style: dotted dashed solid double;">Hii i am ayush </div>

<br>

---
### border-width
- The width can be set as a specific size (px, pt, cm, em, etc)

### border-color
- If border-color is not set, it inherits the color of the element.

### border radius
- adds rounded borders to an element:

      p.one {
        border-style: solid;
        border-width: 5px 20px; 
        border-color: red;
        border-radius: 5px;
      }

---
## <div align="center">SHORTHAND PROPERTY</div>

<br>

- The **border** property is a shorthand property for the following individual border properties:
    
    border-style (compulsion), border-width, 
    border-color

eg

      p {
        border: 5px solid red;
        border-radius: 30px;
      }

<div style="border: 5px solid red;border-radius: 30px; ">Hii i am ayush </div>

