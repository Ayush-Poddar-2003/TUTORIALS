# The form Element
It is used to create an HTML form for user input:

It is a container for different types of input elements, such as: text fields, checkboxes, radio buttons, submit buttons, etc.

---

## The input Element

    <input type="text">
    <input type="radio">
    <input type="checkbox">
    <input type="submit">
    <input type="button">

---

## The label-for Element

It is useful for screen-reader users, because the screen-reader will read out loud the label when the user focuses on the input element.

The **for attribute of the label tag should be equal to the id attribute** of the input element to bind them together.

    <input type="radio" id="html" name="fav" value="HTML">
    <label for="html">HTML</label><br>

Output -
<input type="radio" id="html" name="fav" value="HTML">
<label for="html">HTML</label><br>


---
## ATTRIBUTES -

### 1. Name 
If the name attribute is omitted, the value of the input field will not be sent at all.

### 2. Action 
The action attribute defines the action to be performed when the form is submitted.
Usually, the form data is sent to a file on the server when the user clicks on the submit button.

Tip : If the action attribute is omitted, the action is set to the current page.

### 3. Target
The target attribute specifies where to display the response that is received after submitting the form.

### 4. Method

The form-data can be sent as URL variables (with method="get") or as HTTP post transaction (with method="post").
The default HTTP method when submitting form data is GET. 

NEVER use GET to send sensitive data! (the submitted form data is visible in the URL!)

---


## The select Element
The select element defines a drop-down list:

    <label for="cars">Choose a car:</label>
    <select id="cars" name="cars">
        <option value="volvo">Volvo</option>
        <option value="saab">Saab</option>
        <option value="fiat">Fiat</option>
        <option value="audi" selected>Audi</option>
    </select>
OUTPUT : 
<label for="cars">Choose a car:</label>
<select id="cars" name="cars">
<option value="volvo">Volvo</option>
<option value="saab">Saab</option>
<option value="fiat">Fiat</option>
<option value="audi" selected>Audi</option>
</select>


- Use the size attribute to specify the number of visible values:
- Use the multiple attribute to allow the user to select more than one value: