# SECTION 1

## File paths

1. Absolute : relative to root of computer
2. Relative : direct name

generally direct names doesnot work hence, we do use

    ./name.ext (to access elements within parent folder)
    ../ to go more up folder

-----------------25--------------------

Webpages

------------------31-------------------

CSS
cascade : waterfall
stylesheets let us design web pages
some are : Sass less etc

earlier we had limited designing stuff using html

later w3consrtium introduced html 3.2 with tags such as < font>, < center>
attributes such as face size color
we no longer use these
 
hakom won lee - father of css 

-------------------32---------------------

## Inline
for testing or single line usage else not recommended

    <tag style="property:value">


## Internal
good for single webpage

    <head>
        <style>
            selector{
                property : value;
            }
        </style>
    </head>


## External
save file as name.css

    selector{
        property : value;
    }

further 
link it using -

    <head>
        <link rel="stylesheet" href = "./name.css"/>
    </head>
 


-------------------33---------------------

## Selector types

## Element selector 

    h2{
        color:blue;
    }

but if we have multiple h2 then we cant control each 
hence what came is 

## Class selector

    <h2 class = "abc"> hii </h2>
    .abc{
        property:value;
    }

we can have different tags under same class


## ID selector

    <h2 id = "xyz"> hii </h2>
    #xyz{
        property:value;
    }

for single elemwnts  

## Attribute selector

    tag[attribute="value"]{
        color:red
    }

-----------------34----------

PROJECTS ....

------------------- 33 36 37---------------------

HEX CODES FOR COLORS
COLORHUNT WEBSITE 
for matching pair of colors

-------------------38-----------------------

1 px = 1/96th of inch = 0.26mm
1 pt = 1/72nd of inch = 0.35mm

ms word uses point for size

1 em = relative size if parent increases it also increases
1 rem = relative size if root increases it also increases parent doesnot affect it

font-family
text align

-------------------39-----------------------
tables should only use to store data
for layous :-------------------

after table people started using display : inline-block
further position:absolute

then came float not preferred use only for images

display:flex
to use it put all div in one container 
and the set its display:flex

    .abc{
        display:flex;
        gap:10px;
    }

everything inside this container becomes inline in nature and contaier itself becomes block
to make container inline use

    .abc{
        display:flex;
        gap:10px;
    }

rest check project 

-----------------54---------------------

flex-direction : row {by default}
this means elemts will be arranged in a single row
flex basis:10px here will increase/decrease width of elements {NOT USED FOR CONTAINER INSTEAD TARGET CHILD}

if flex-direction: column {in columns }
flex basis:10px here will increase/decrease height of elements

-----------------55---------------------

always using flexbox make sure wheter it affects container or the child Element
cheatsheet : https://css-tricks.com/snippets/css/a-guide-to-flexbox/


1. order:0 {by default}
for rearragement set their orders and they will re-arrange

2. flex-wrap:nowrap {by default parent property}
this makes sure no matter what everything will be in single row
to wrap element to next row use
flex-wrap:wrap;

eg : https://appbrewery.github.io/flex-layout/

3. justify-content:flex-start;{parent property}
uses row , to align everything to left
justify-content:flex-start;
to align everything to right
justify-content:center;
to makae everything to come to center
more values like space-evenly etc check eg

4. align-items:flex-start;
uses column, for different posititons
check e.g.

all above were container properties

5. align-self: for child targeting

6. align-content:center;{only can be used if flex-wrap is set to wrap}

-----------------56----------------------------

how elements shrinks upon resizing window

max/min/height/weight > flex-basis > Width > Content-Width

if we decrease the window size , element will start getting stacked till it reach min width

min width : eqaual to largest word
max width : equal to longest possible line

----------------57----------------------------

            CSS GRIDS

Flexbox vs grid

flexbox good for 1d
grid for 2d

to use grid put everything in a container
then use

    .container{
        display:grid;
        grid-template-colums: 1fr 2fr; 
        grid-template-rows: 1fr 1fr; 
        gap: 10px;
    }

fr is ration b/w consecutive cols/rows

------------------60----------------------------

    .container{
        display:grid;
        grid-template-rows: 100px 200px; 
        grid-template-colums: 400px 800px; 
    }

they are not responsive
we can use rem but it sill be not fully responsive

shorthand property

<style>
body{
    background-color:"black";
}
</style>
    .container{
        display:grid;
        grid-template-rows: 100px 200px / 400px 800px ; 
    } 


for little responsiveness we can use auto keyword]

    .container{
        display:grid;
        grid-template-rows: 100px auto; 
        grid-template-colums: 400px auto ;
    }

    for column, auto takes screen to fill
    where as for row it takes size according to element



min-max - to limit the size

    .container{
        display:grid;
        grid-template-rows: 100px 400px; 
        grid-template-colums: 400px minmax(400px,800px) ;
    }


avoiding repetetion repeat(times, size)

    .container{
        display:grid;
        grid-template-rows: repeat(2, 400px); 
        grid-template-colums: repeat(2,800px) ;
    }
    

what if no of element exceed grid
height : it will take of element
width: it will take of above cell
to maintain similarity

    .container{
        display:grid;
        grid-template-rows: 100px 200px; 
        grid-template-colums: 400px 800px;
        grid-auto-rows: 300px;
    } 

for practicing : https://appbrewery.github.io/grid-sizing/test.html

----------------------61----------------------------

    .container{
        height : 100vh
        display:grid;
        grid-template-rows: 100px 200px; 
        grid-template-colums: 400px 800px;
    } 

    vh ensure height takes screen size not content

    .item{
        display:flex;
        grid-column: span 2;     % colspan of two cells
        grid-column-start: 2;    % to start from 2 cell
        grid-column-end: 4;      % to end at 4th cell
        grid-column: span 2;     % shorthand for gird-column-start and end and span means start from that cell

        % same for rows

        grid-area : 2/1/3/3;     % shorthand for grid row col start and row col end

        order : 1                % by default order is 0 
    } 
  
    https://cssgridgarden.com/ ==> for practice

--------------62 63 ---------------------------

WHAT IS BOOTSTRAP ?

Well, they're pre-made CSS files which you can include into your projects.
lots more like MUI and Tailwind and a whole bunch more.

CONS : CSS BLOATING : mess can't differentiate html css all mess

to use bootstrap first go to getbootstrap.com then copy CDN link

<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0-alpha3/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-KK94CHFLLe+nY2dmCWGMq91rCGa5gtU4mk92HdvYe+M/SXH301p5ILy+dN9+nJOZ" crossorigin="anonymous">

then use any prebuilt thing and enjoy!!

------------------------64*---------------------------

https://appbrewery.github.io/bootstrap-layout/

        <div class="col-xl-6 col-sm-12">

        </div>

        $grid-breakpoints: (
            xs: 0,
            sm: 576px,
            md: 768px,
            lg: 992px,
            xl: 1200px,
            xxl: 1400px
        );

------------------------65------------------------


--------------------74---------------------
LINKS - Notes
--------------------75---------------------
JAVA SCRIPT HISTORY :-

Netscape Navigator, the browser that dominated the 90s.
Marc Andreessen - principle makers of the Netscape Navigator held over 80 percent of the market share.

So in order to make browsers interactive so that it does't need servers in b/w is by creating a small scripting language.

The requirements were that this language had to be simple and had to be really easy so that even non-developers and non-programmers could use it to add functionality to web sites.
So they contracted Brendan Eich, to create that programming language.
Brendan was able to create Javascript in 10 days.

Different versions of Javascript not referred to as JS5 or JS6 but as ES6 or ES7, and the ES comes of course from ECMAscript.
--------------------76----------------------

We can write code in console too
as we press enter it executes 
and if we want to execute multiple statements we can press shift + enter

basic semantics and comparision with english keyword
--------------------77-----------------------

basic datatypes intro
typeof() => gives the datatype
-------------------78------------------------

variables intro
prompt() let's you take input from user

-------------------79-----------------------

Math.random();
generates random numbers from 0 - 0.99999999999999 upto 14decimals 
we can create our desired range by multiplying it
for eg DICE :

var n = Math.random();
n = n*6;
n = Math.ceil(n);
n = console.log(n);

---

# Section 16

DOM - Document object model


