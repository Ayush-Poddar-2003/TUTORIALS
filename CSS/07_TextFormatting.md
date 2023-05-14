Text Color
The color property is used to set the color of the text. The color is specified by:

Text Alignment
The text-align property is used to set the horizontal alignment of a text.
A text can be left or right aligned, centered, or justified(spaces for filling).


Text Direction
The direction and unicode-bidi properties can be used to change the text direction of an element:

    p {
        direction: rtl;
        unicode-bidi: bidi-override;
    }


Vertical Alignment
The vertical-align property sets the vertical alignment of an element.

img.a {
  vertical-align: baseline;
}

img.b {
  vertical-align: text-top;
}

img.c {
  vertical-align: text-bottom;
}

img.d {
  vertical-align: sub;
}

img.e {
  vertical-align: super;
}



Add a Decoration Line to Text
h1 {
  text-decoration-line: overline;
}

h2 {
  text-decoration-line: line-through;
}

h3 {
  text-decoration-line: underline;
}

p {
  text-decoration-line: overline underline;
}

