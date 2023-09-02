# EXPRESS

Frameworks Rankings :-
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

1. Create Directory

        mkdir "3.1 Express Server"
2. Create index.js file
        
        touch index.js
3. Initialise NPM

        npm init -y
4. Install the Express Package

        npm i express

    ```js
    "type": "module", //in package.json
    ```
5. Write server application in index.js
    ```js
    import express from "express";
    const app = express();
    const port = 3000

    app.listen(port, () =>{
        console.log(`Server running on port ${port}`)
    })
    ```
6. Start Server

        node index.js 

---

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
