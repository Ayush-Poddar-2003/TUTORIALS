# **HTML TUTORIAL**

HTML : Hyper Text Markup Language

---

## HEADINGS -
    <h1> : Largest 
    <h6> : Smallest

---

## PARAGRAPH -
    <p> : Starts on a new line, and automatically add margin
    <br> : line break
    <hr> : Horizontal Line
    <pre>: Preserves spaces and line breaks
 
-----------------------------------------

## TEXT FORMATTING -
    <b>      - Bold text
    <strong> - Important text
    <i>      - Italic text
    <em>     - Emphasized text
    <mark>   - Marked text
    <small>  - Smaller text
    <del>    - Deleted text
    <ins>    - Inserted text
    <sub>    - Subscript text
    <sup>    - Superscript text
---

    <abbr>	      -  Defines an abbreviation 
    <address>     -  Defines contact information 
    <bdo>	      -  Defines the text direction
    <blockquote>  -  Defines a section that is quoted 
    <cite>	      -  Defines the title of a work
    <q>	          -  Defines a short inline quotation

 ---

 ## COMMENTS -
    < !--- COMMENT --- > 

---

## LINKS

    <a href="url" target="" alt=""> HYPERLINK </a>

Hyper link can be text image or anything

The target attribute can have one of the following values:
    
    _self   - Default, Opens the document in the same window
    _blank  - Opens the document in a new window or tab
    _parent - Opens the document in the parent frame
    _top    - Opens the document in the full body of the window

The title attribute specifies extra information about an element. The information is most often shown as a tooltip text when the mouse moves over the element.
    
    <a href="url" title=""> HYPERLINK </a>

HTML links can be used to create bookmarks, so that readers can jump to specific parts of a web page.

    <h2 id="C4"> Chapter 4 </h2>
    <a href="#C4"> Jump to Chapter 4 </a>


---

## IMAGES
    <img src="" alt="">

### Image Maps
An image map is an image with clickable areas. 
    
    <img src="" alt="" usemap="#ABC">

    <map name="ABC">
        <area shape="rect" coords="3,4,7,3" href="computer.htm">
        <area shape="rect" coords="29,12,33,20" href="phone.htm">
        <area shape="cir" coords="337,300,44" href="coffee.htm">
    </map>

---

## FAVICON
    <link rel="icon" type="image/x-icon" href="">