## What is Backend ?
= Server + logic + database

- Front end : HTML CSS JS , Frameworks like **react**, **angular** 

- Back end : JS JAVA PHP C# RUBY PYTHON , Frameworks: **nodejs** **flask** **django**<br><br>



## What is Node Js
- A Framework for js imagine it as a mayonise, readymade
- It let us use Js to make backend
- FAANG uses NodeJs, NASA too
- Node.js eliminates the waiting, and simply continues with the next request, unlike PHP & ASP

Download node before using it

    node -v //to check version

<br>

## REPL - Read Eval Print Loop
A computer encironment where user inputs are read and evaluated and then results are returned to the user

    Write node in terminal to open Node REPL (> will appear)
Some useful commands

    .exit to exit REPL
    .help to show list of all commands

You can write any Js in node Repl<br><br>



## Steps to run premade js file
1. Open terminal
2. Navigate your Js file in terminal
3. Write node filename.js

<br><br>


---
# <center> NATIVE MODULES

Starting tool set, Similar like native games that come with windows

Documentation : https://nodejs.org/docs/latest-v18.x/api/

## File System
Documentation https://nodejs.org/docs/latest-v18.x/api/fs.html, We will be using cjs

```javascript
// 1. Select module by writing this inside Js file

const fs = require('fs');
```
Select method documentation and follow steps and syntax
For e.g. 

### 1. writefile 
https://nodejs.org/docs/latest-v18.x/api/fs.html#fswritefilefile-data-options-callback

```javascript
// this will create a file named message and add hello inside it

fs.writeFile("message.txt", "Hello", (err) => {
    if(err) throw err;
    console.log("The file has been saved");
});

// Now run file in terminal
node filename.js
```

We didn't have to worry how to save take input etc etc everything done with premade modules<br><br>

### 2. readFile
Documentation : https://nodejs.org/docs/latest-v18.x/api/fs.html#filehandlereadfileoptions

```js
// It takes path, encoding scheme & return either data or error
 
fs.readFile("./message.txt", "utf8", (err, data) => {
    if(err) throw err;
    console.log(data);
});
```

# 198 NPM
pre bundled code 
comes pre installed wirh node

npm init => to initialize it
after which a json file is created

to install any npm package use 
    npm install <something>

this will add a folder of that package with pre build files

# ESM
1. cjs need require keyword

    // syntax from mdn
    var generateName = require("sillyname");
    var sillyName = generateName();
    console.log(`My name is ${sillyName}.`);

2.  esm uses import keyword

    import generateName from "sillyname";
    var sillyName = generateName();
    console.log(`My name is ${sillyName}.`);

import superheroes from 'superheroes';
var name = superheroes.random();
console.log(`My name is ${name}.`);

---

# 199 QR CODE  


--------------------------------------
