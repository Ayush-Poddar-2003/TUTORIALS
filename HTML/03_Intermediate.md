# The HTML < head > Element
The < head> element is a container for metadata** (data about data) and is placed between the html body tag.

---

## The HTML < title > Element 
The content of a page title is very important for search engine optimization (SEO)! 

The page title is used by search engine algorithms to decide the order when listing pages in search results.

---

## The HTML < meta > Element
The meta element is typically used to specify the character set, page description, keywords, author of the document, and viewport settings.

The metadata will not be displayed on the page, but is used by browsers (how to display content or reload page), by search engines (keywords), and other web services.


    Define the character set used:
    <meta charset="UTF-8">

    Define keywords for search engines:
    <meta name="keywords" content="HTML, CSS, JavaScript">

    Define a description of your web page:
    <meta name="description" content="Free Web tutorials">

    Define the author of a page:
    <meta name="author" content="John Doe">

    Refresh document every 30 seconds:
    <meta http-equiv="refresh" content="30">

    Setting the viewport to make your website look good on all devices:
    <meta name="viewport" content="width=device-width, initial-scale=1.0">

---

You should include the following meta element in all your web pages:

    <meta name="viewport" content="width=device-width, initial-scale=1.0">

This gives the browser instructions on how to control the page's dimensions and scaling.

---

## The HTML < base > Element

The base element specifies the base URL and/or target (default) for all relative URLs in a page.

The base tag must have either an href or a target attribute present, or both.

There can only be one single <base> element in a document!

---

## Non-breaking Space
If you write 10 spaces in your text, the browser will remove 9 of them. To add real spaces to your text, you can use the &nbsp; character entity.