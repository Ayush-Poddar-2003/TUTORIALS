## HORIZONTAL CENTER

### using margin and width

    block {
        margin: auto;
        width: 50%;
    }
    // only with block level elements

<div style = " 
  margin: auto;
  width: 25%;
  border: 3px solid pink;
  padding: 10px;"> center</div>

this works on images too by making it's display : block

---
<br>

## LEFT - RIGHT ALIGN

### using absolute position

    right {
        position: absolute;
        right: 0px; //or
        left : 0px;
        width: 300px;
    }
    // as absolute changes actual position hence it can overlap too

<div style = "
  position: absolute;
  right: 0px;
  width: 100px;
  border: 3px solid #73AD21;"> right aligned</div>

<div style = "
  position: absolute;
  left: 0px;
  width: 100px;
  border: 3px solid #73AD21;"> left aligned</div>

<br><br>

---

### using float

    right {
        float: right;
        width: 300px;
    }

<div style = "
  float: right;
  border: 3px solid orange;">using float</div>

<br><br>

---

## VERTICAL CENTER

TOP AND BOTTOM PADDING

    .center {
        padding: 70px 0;
    }

<BR>

---

## HORIZONTAL & VERTICAL CENTER
1.  Using padding and text align

        abc {
            padding: 70px 0;
            text-align: center;
        }

2. Using Flexbox

        abc {
            display: flex;
            justify-content: center;
            align-items: center;
        }

3. Using Position transform **
