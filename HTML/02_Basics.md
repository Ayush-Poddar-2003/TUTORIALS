# TABLES

    <table>
    <tr>
        <th> </th>
        <th> </th>
    </tr>
    <tr>
        <td> </td>
        <td> </td>
    </tr>
    </table>

## PADDING VS SPACING

Cell padding : Space between the cell edges and the cell content.
By default the padding is set to 0.

Cell spacing : Space between each cell.
By default the space is set to 2 pixels.<BR><BR>

## COLSPAN VS ROWSPAN

COLSPAN : To make a cell span over multiple columns
ROWSPAN : To make a cell span over multiple rows

<br>

---

# LISTS

    <ul>	Defines an unordered list
    <ol>	Defines an ordered list
    <li>	Defines a list item
    <dl>	Defines a description list
    <dt>	Defines a term in a description list
    <dd>	Describes the term in a description list

eg

    <dl>
        <dt>Coffee</dt>
            <dd>- black hot drink</dd>
        <dt>Milk</dt>
            <dd>- white cold drink</dd>
    </dl>
<BR><BR>

---

# BLOCK VS INLINE

A block-level element always starts on a new line
Two commonly used block elements are: < p> and **< div>**

An inline element does not start on a new line, for eg 
**< span>**<br><br><br>

---

# CLASS VS ID
The class attribute is used to specify a class for an HTML element.

Multiple HTML elements can share the same class.

    <html>
        <head>
        <style>
            .special{
                color:blue;
            }
        </style>
        </head>

    <body>
        <p class="special">My paragraph</p>
    </body>
    </html>

The HTML id attribute is used to specify a unique id for an HTML element.

You cannot have more than one element with the same id in an HTML document.

    <head>
     <style>
        #myheader {color:red;}
     </style>
    </head>
    
    <body>
    <h1 id="myheader">My Home Page</h1>
    </body>

---

# IFRAMES

It is used to display a web page within a web page

    <iframe src="url" height="200" width="300" title="description"></iframe>
    
It is a good practice to always include a title attribute for the iframe