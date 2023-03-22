# The form Element
The HTML form element is used to create an HTML form for user input:

The form element is a container for different types of input elements, such as: text fields, checkboxes, radio buttons, submit buttons, etc.

## The input Element
    <input type="text">
    <input type="radio">
    <input type="checkbox">
    <input type="submit">
    <input type="button">


## The label Element
The label element is useful for screen-reader users, because the screen-reader will read out loud the label when the user focuses on the input element.

The **for attribute of the label tag should be equal to the id** attribute of the input element to bind them together.  

    <input type="radio" id="html" name="fav_language" value="HTML">
    <label for="html">HTML</label><br>


## The Name Attribute for input
If the name attribute is omitted, the value of the input field will not be sent at all.

The Action Attribute
The action attribute defines the action to be performed when the form is submitted.

Usually, the form data is sent to a file on the server when the user clicks on the submit button.
Tip: If the action attribute is omitted, the action is set to the current page.

---
## The Target Attribute
The target attribute specifies where to display the response that is received after submitting the form.

---
## The Method Attribute
The method attribute specifies the HTTP method to be used when submitting the form data.

The form-data can be sent as URL variables (with method="get") or as HTTP post transaction (with method="post").

The default HTTP method when submitting form data is GET. 

Notes on GET:

Appends the form data to the URL, in name/value pairs
NEVER use GET to send sensitive data! (the submitted form data is visible in the URL!)
The length of a URL is limited (2048 characters)
Useful for form submissions where a user wants to bookmark the result
GET is good for non-secure data, like query strings in Google
Notes on POST:

Appends the form data inside the body of the HTTP request (the submitted form data is not shown in the URL)
POST has no size limitations, and can be used to send large amounts of data.
Form submissions with POST cannot be bookmarked
Tip: Always use POST if the form data contains sensitive or personal information!


## The select Element
The select element defines a drop-down list:

    <label for="cars">Choose a car:</label>
    <select id="cars" name="cars">
    <option value="volvo">Volvo</option>
    <option value="saab">Saab</option>
    <option value="fiat">Fiat</option>
    <option value="audi" selected>Audi</option>
    </select>

To define a pre-selected option, add the selected attribute to the option:

Use the size attribute to specify the number of visible values:

Use the multiple attribute to allow the user to select more than one value: