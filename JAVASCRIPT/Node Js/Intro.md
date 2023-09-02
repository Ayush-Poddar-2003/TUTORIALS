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
Documentation https://nodejs.org/docs/latest-v18.x/api/fs.html, 
We will be using **cjs** i.e. common javascript that uses "require( )" keyword

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
<br><br><br>

# <center>NPM

Community tool library
Comes pre bundled with node

    1. Go to directory in terminal

    2. npm init
    after which a json file is created in the directory

then it will ask bunch of questions

    // npm install <something>
    to install any npm package 

packages : https://www.npmjs.com/

for eg

### 1. Sillyname
documentation: https://www.npmjs.com/package/sillyname

    // Write in terminal
    npm i sillyname
    
    // now if u check package.json u will see package name in dependancies
    // also there will be a folder named node modules which consist of sillyname

Now code these in your js file

```js
var generateName = require('sillyname');
var sillyName = generateName();

console.log(`My name is ${sillyName}`)
```

Now in terminal run node 

    node filename



## <center>ESM

As cjs needs "require( )" keyword, esm uses import keyword as a standardized way of using Javascript to be consistent on the frontend and backend and controls bts

To be able to use esm we need to go to package.json and below main add

```js 
"type": "module";
```

so now istead of

```js
var generateName = require('sillyname');
var sillyName = generateName();
console.log(`My name is ${sillyName}`)

// we can write
import generateName from "sillyName";
var sillyName = generateName();
console.log(`My name is ${sillyName}`)
```
<br>

### 3. Superheroes
documentation: https://www.npmjs.com/package/superheroes

    npm i superheroes

```js 
"type": "module";
```
    npm init -y

```js
import superheroes from 'superheroes';
const name = superheroes.random();
console.log(`My name is ${name}.`);
```

---

## QR CODE  

