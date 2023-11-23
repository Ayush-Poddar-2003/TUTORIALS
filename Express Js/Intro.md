# EXPRESS  Js

Frameworks Rankings -

    1. Node Js
    2. React Js
    3. JQuery
    4. Express

Nodejs + Express = Poweful Backend

Vs Code is created using Nodejs

Imagine screw as Js,
Manual Screw Driver as a Nodejs,
Automatic Screw Driver as a Expressjs
<br><br>


## Creating an Express Server

1. Create Folder and a Js File 

        mkdir "3.1 Express Server"
        touch index.js
2. Initialise NPM

        npm init -y
3. Install the Express Package

        npm i express

    ```js
    "type": "module", //in package.json
    ```
4. Write server application in index.js
    ```js
    // From Documentation 
    import express from "express";
    const app = express();

    app.get('/', function(req,res){
        res.send("Hello World");
    })
    ```
5. Start Server

        node index.js 

---
### Note -
You can check all the request to computer by typing

    netstat -ano | fintstr "LISTENING"

<br>

## HTTP Requests

GET - Request Resource from server

POST - Sending Resource to server

PUT - Replace/update with something that 
you are sending

PATCH - Replace/update with only  particular functionality

DELETE - Request to delete something

Overall  HTTP helps client computers to communicate with server computers

---

```js
// To target home page
import express from "express";
const app = express();
const port = 3000;

app.get("/", (req, res) => {
    res.send("Hello World");
})

app.listen(port, () => {
    console.log(`Server started on port ${port}`);
})
```

    node index.js //starts server 
 If any changes are made restart the server using node index.js

but that is pain in ass

To overcome this replace node with

    nodemon index.js

install it using 

    npm i -g nodemon 
    //-g to use it permanently not to reinstall

---

## HTTP Responses Status codes

https://developer.mozilla.org/en-US/docs/Web/HTTP/Status

    100 - 199 : Information Response
    200 - 299 : Sucessfull response
    300 - 399 : Redirection
    400 - 499 : Client Error
    500 - 599 : Server Error

## Post
Request usually made from some sort of html form

## Postman
When we don't want a front end to get your code tested

--- 

When you download node projects from internet it won't come with actual node modules coz of lot of dependancies and large size rather

    npm install //this will download all modules

Usage of Postman
<br><br>



# Middlewares
