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