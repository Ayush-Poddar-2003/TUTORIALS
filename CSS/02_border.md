 None of the OTHER CSS border properties (which you will learn more about in the next chapters) will have ANY effect unless the border-style property is set!

CSS Border Width
The border-width property specifies the width of the four borders.

The width can be set as a specific size (in px, pt, cm, em, etc) or by using one of the three pre-defined values: thin, medium, or thick:

CSS Border Color
The border-color property is used to set the color of the four borders.

Note: If border-color is not set, it inherits the color of the element.

p {
  border-top-style: dotted;
  border-right-style: solid;
  border-bottom-style: dotted;
  border-left-style: solid;
}


If the border-style property has three values:

border-style: dotted solid double;
top border is dotted
right and left borders are solid
bottom border is double

To shorten the code, it is also possible to specify all the individual border properties in one property.

The border property is a shorthand property for the following individual border properties:

border-width
border-style (required)
border-color

p {
  border: 5px solid red;
}

CSS Rounded Borders
The border-radius property is used to add rounded borders to an element:

