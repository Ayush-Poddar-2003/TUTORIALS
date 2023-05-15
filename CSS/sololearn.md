# What is CSS 
 
CSS allows you to define styles for web pages.

It can be used to style text, change colors, font size, etc., as well as create layout - for example, create columns, sidebars, navigation menus, etc.

CSS stands for Cascading Style Sheets.

We can also target elements based on their location.
For example, there are two <strong> elements, one inside a paragraph and the other inside a list item.

li strong {
  color: purple;
}


Each component can take the value 0 to 255.
0 is the absence of the component, so rgb(0, 0, 0) corresponds to black, while rgb(255, 255, 255) is the color white.

By default, 1em = 16px

ou can also define the font weight with a number from 100 (thin) to 900 (thick). 400 is the same as normal, and 700 is the same as bold.

text-transform 
 

The text-transform property allows you to transform text with the following values:

uppercase: Transforms the text to capitals.

lowercase: Transforms the text to lower case.

capitalize: Transforms all words to have the first letter capitalized.

text-decoration 
 

The text-decoration property supports the following values:

none: removes any decoration.

underline: underlines the text.

overline: gives the text an overline.

line-through: puts a strikethrough over the text.


text-shadow 
The text-shadow property allows you to set a shadow for the text.

It takes 4 values, like this:

h1 {
  text-shadow: 3px 2px 3px red;
} 

Text Alignment  
 

The text-align property is used to control how text is aligned within its container. 

The supported values are: left, right, center, justify.

---

The Box Model 
 

HTML elements appear as boxes. 

The box model defines how the different parts of the box -  margin, border, padding, and content, work together to create the box.

Here are the parts of the box:

The content box is the area where the content is displayed.

The padding box is the white space around the content.

The border box comes after the padding.

The margin box is the last one and defines the space between this box and other elements.

---

The Standard Box Model 
 

In the standard box model, the height and width attributes define the size of the content box.

Any padding and border is then added to that width and height to get the total size of the box.

For example, the total width of the box with paddings will be the sum of width plus padding left and padding right.

The margin is not counted towards the actual size of the box, it is the space outside the box.

---

Alternative Box Model 
 

It can be inconvenient to calculate the actual size of the box, because of the padding and border widths being added to it.

For this reason, CSS provides an alternative box model where the given width is taken by the box and includes the padding and border.

The model is turned on using box-sizing: border-box:

The background-position property sets the position in which the background image appears. 

It uses a coordinate system in which the top-left corner of the box is at position (0,0).

As its value, it can take both pixel/percentage units and keywords (top, left, right, bottom, center).

The background-size property allows you to define how the image should fit inside the box.

It has two possible values:

cover: The image will completely cover the box, while maintaining its aspect ratio. 

contain: The image will fit inside the box completely.

---

By default, unordered list items are marked with round bullets, while ordered lists are numbered.

The list-style-type property allows you to change the markers to circle, square, decimal, disc, lower-alpha, lower-roman, etc.

The list-style property is a shorthand for setting list-style-type, list-style-image and list-style-position, all in one declaration:

ul {
 list-style: square outside none;
}