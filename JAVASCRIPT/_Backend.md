# 191
Startups needs tech employees first

What is Backend ?
Server + logic + database

# 192
Front end : HTML CSS JS , Frameworks like react angular which acts like waiter in a restraunt
Backend : JS JAVA PHP C# RUBY PYTHON , Frameworks: nodejs flask django

---

# 193 Node.js
A Framework for js imagine it as a mayonise, readymade
It let us use Js to make backend
FAANG uses NodeJs, NASA too

# 194 195 installation

# 196 
Write node in terminal to open REPL
.exit to exit REPL
Ctrl A works same

1. Open terminal
2. Go to your Js file Repo in terminal
3. Write node filename.js

# 197 NATIVE MODULES
using modules
    const fs = require('fs');

    // fs file system module taken from documentation
    fs.writeFile("message.txt", "Hello Aditi", (err) => {
        if(err) throw err;
        console.log("The file has been saved");
    });

    // read module
    fs.readFile("./message.txt", "utf8", (err, data) => {
        if(err) throw err;
        console.log(data);
    });

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

# 216 GITHUB
VERSION CONTROL

# 217

touch filename.txt
code filename.txt
git init
git add filename.txt
git status
git commit -m "commitname"
git log
git diff filename
git checkout filename
