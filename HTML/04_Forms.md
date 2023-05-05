# The form Element
An HTML form is a convenient way to send data to a database hosted in a server.

It is a container for different types of input elements, such as: text fields, checkboxes, radio buttons, submit buttons, etc.



    <input type="text">
<input type="text"><br>


    <input type="radio">
<input type="radio">

    <input type="checkbox">
<input type="checkbox">

    <input type="button">
<input type="button">

---
A submit button is used to send the data in a form. The submit type of input adds a button to the form.


    <input type="submit">
<input type="submit"><br>


<br>

---

## The label-for Element

It is useful for screen-reader users, because the screen-reader will read out loud the label when the user focuses on the input element.

The **for attribute of the label tag should be equal to the id attribute** of the input element to bind them together.

    <input type="radio" id="abc">
    <label for="abc">HTML</label><br>

<input type="radio" id="html" name="fav" value="HTML">
<label for="html">HTML</label><br>
<br>

When labels and form fields are correctly connected
hitting the label selects the form field
<br><br>

---
## ATTRIBUTES -

<br>

### 1. Name 
The name attribute is used to reference the data after submitting the form. 

Only form elements with a name attribute will have their values passed to the database when submitting a form.

    <form>
        <input type="text" name="email"> 
        <input type="text" name="city">
        <input type="submit">
    </form>


### 2. Value
The value attribute defines the value that is submitted when the input is selected.

    <form>
        <input type="radio" id="r1" name="pay" value="cash">
        <label for="r1">Cash</label>

        <input type="radio" id="r2" name="pay" value="card">
        <label for="r2">Card</label>
    </form>

Names and values are needed to correctly store information in the database. The HTML code needs to include where and what to put in the database.


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

<label for="cars">Choose a car:</label>
<select id="cars" name="cars">
<option value="volvo">Volvo</option>
<option value="saab">Saab</option>
<option value="fiat">Fiat</option>
<option value="audi">Audi</option>
</select>


- Use the size attribute to specify the number of visible values:
- Use the multiple attribute to allow the user to select more than one value: