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

