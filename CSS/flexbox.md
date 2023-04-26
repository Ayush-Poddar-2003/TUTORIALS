Flexbox Elements
To start using the Flexbox model, you need to first define a flex container.

The flex container becomes flexible by setting the display property to flex:

.flex-container {
  display: flex;
}

The flex container properties are:

1. The flex-direction Property
The flex-direction property defines in which direction the container wants to stack the flex items.
values : column,column-reverse,row,row-reverse
The column-reverse value stacks the flex items vertically (but from bottom to top):

.flex-container {
  display: flex;
  flex-direction: column;
}



2. The flex-wrap Property
values: wrap, nowrap, wrap-reverse

.flex-container {
  display: flex;
  flex-wrap: wrap-reverse;
}

SHORTHAND 
The flex-flow Property
The flex-flow property is a shorthand property for setting both the flex-direction and flex-wrap properties.

.flex-container {
  display: flex;
  flex-flow: row wrap;
}



3. The justify-content Property
The justify-content property is used to align the flex items(elements inside container):

VALUES : center, flex-start, flex-end, space-around, space-between

4. align-items
The align-items property is used to align the flex items.
 same values as above

 

