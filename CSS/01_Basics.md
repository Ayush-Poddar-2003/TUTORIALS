# What is CSS?
**Hakom won lee** - Father of css 

CSS : Cascading Style Sheets

Cascade : waterfall
, Stylesheets let us design web pages

Some more stylesheets are : SASS ,LESS etc

Earlier we had limited designing stuff using html,
later w3consortium introduced html 3.2 with tags such as < font >, < center > attributes such as "face, size, color" etc.

After CSS we no longer use these
 

---
There are three ways of inserting a style sheet:

### 1. External CSS

    <head>
        <link rel="stylesheet" href="mystyle.css">
    </head>

### 2. Internal CSS

    <head>
        <style>
            selector {
                property:value;
            }
        </style>
    </head>

### 3. Inline CSS
For testing or single line usage else not recommended
    
    <element style="property:value;"> ABC </p>


## Cascading Order (priority)

Inline > External or internal style sheets (last read)<br><br>

---

## COMMENTS

    /*comment*/
<br>


---
## SYNTAX

    selector {
        property : value;
        property : value;
    }



**Note:** Do not add a space b/w the value and the unit 20px <br><br>

---

## <div align = "center">EXTRA KNOWLEDGE

<br><br>
COLORHUNT WEBSITE : for matching pair of colors

1 px = 1/96th of inch = 0.26mm

1 pt = 1/72nd of inch = 0.35mm ,(ms word uses point for size)

1 em = relative size if parent increases it also increases

1 rem = relative size if root increases it also increases parent doesnot affect it


textalign
font size
font weigth
color
font family