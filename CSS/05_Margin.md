# Margin - 

Space outside border

We can specify the margin for each side :
<br>

        p {
            margin-top: 100px;
            margin-right: 150px;
            margin-left: 80px;
            margin-bottom: 100px;
        }

### Shorthand Property

    p {
        margin: 25px 50px 75px 100px;
    }

If the margin property has three values: top, right-left, bottom
<br><br>

---




## The inherit Value
Jitna container ka margin h utna hi uske andr ke alement ka w.r.t. the container

    .par {
        border: 1px solid red;
        margin-left: 100px;
    }

    p.par {
        margin-left: inherit;
    }

<div style="border: 1px solid red;margin-left: 100px;">

<p class="ex1" style = "margin-left: inherit;">this text margin is same as container due to inherit</p>
</div>
<br>

---
## Auto value
one way to center container is using margin auto property

    div {
        width: 300px;
        margin: auto;
        border: 1px solid red;
    }

<div style = "
  width: 300px;
  margin: auto;
  border: 1px solid red;"
>This container will always be in center</div>

<br><br>
---

# Margin Collapse
Top and bottom margins are sometimes collapsed into a single margin equal to the largest of the two margins.

Only top and bottom margins!

    h1 {
        margin: 0 0 50px 0;
    }

    h2 {
        margin: 20px 0 0 0;
    }

There should be 70px (50px + 20px) margin But due to margin collapse, the actual margin ends up being 50px.