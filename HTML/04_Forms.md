# The form Element
An HTML form is a convenient way to send data to a database hosted in a server.

    <input type="text">
<input type="text"><br>

<br>

    <input type="radio">
<input type="radio">

<br>


    <input type="checkbox">
<input type="checkbox">

<br>

    <input type="button" value="okay">
<input type="button" value="okay">

<br>
<br>

    <input type="submit">
<input type="submit"><br>

A submit button is used to send the data in a form. The submit type of input adds a button to the form.

<br>


## The label-for Element

It is useful for screen-reader users

**for** attribute of the label tag should be equal to the **id attribute** of the input element to bind them together.

```html
<input type="radio" id="abc">
<label for="abc">HTML</label>
```

<input type="radio" id="html" name="fav" value="HTML">
<label for="html">HTML</label><br>
<br>


## <center>ATTRIBUTES -



### 1. Name 

Only form elements with a name attribute will have their values passed to the database when submitting a form.

```html
<form>
    <input type="text" name="email"> 
    <input type="text" name="city">
    <input type="submit">
</form>
```
<br>

### 2. Value
The value attribute defines the value that is submitted when the input is selected.

```html
<form>
    <input type="radio" id="r1" name="pay" value="cash">
    <label for="r1"> Cash </label>
</form>
```
Names and values are needed to correctly store information in the database. The HTML code needs to include where and what to put in the database.

<br>

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