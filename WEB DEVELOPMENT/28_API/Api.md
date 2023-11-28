# API

Application programming interface<br>
It bridges the communication b/w 2 softwares<br>
API helps two programs or applications to communicate with each other by providing them with the necessary tools and functions.

### How is an API Different From a Web Application?
An API acts as an interface that allows proper communication between two programs whereas a web application is a network-based resource responsible for completing a single task. Also, it’s important to know that “All web services are APIs, but not all APIs are web”.

## REST: API
REST stands for Representational State Transfer, and follows the constraints of REST architecture allowing interaction with RESTful web services. It defines a set of functions (GET, PUT, POST, DELETE) that clients use to access server data. The functions used are:

GET (retrieve a record)
PUT (update a record)
POST (create a record)
DELETE (delete the record)
Its main feature is that REST API is statelessness, i.e., the servers do not save clients’ data between requests.

---

## How to use public API ?

For Reference - https://bored-api.appbrewery.com/

```js
www.baseurl/endpoint => endpoint determines data we can access
https://bored-api.appbrewery.com/random

baseurl/endpoint?query1=value&query2=value => to pass parameters in a request
https://bored-api.appbrewery.com/filter?type=education

baseurl/endpoint/{path-parameter} => specific
https://bored-api.appbrewery.com/activity/3943506
```
---
<br>

# <center>JSON
SON stands for JavaScript Object Notation

JSON is a lightweight format for storing and transporting data

JSON is often used when data is sent from a server to a web page

JSON is "self-describing" and easy to understand

{
"employees":[
    {"firstName":"John", "lastName":"Doe"},
    {"firstName":"Anna", "lastName":"Smith"},
    {"firstName":"Peter", "lastName":"Jones"}
]
}

The JSON format is syntactically identical to the code for creating JavaScript objects.

Because of this similarity, a JavaScript program can easily convert JSON data into native JavaScript objects.

JSON data is written as name/value pairs
"firstName":"John"

JSON objects are written inside curly braces.
{"firstName":"John", "lastName":"Doe"}

JSON arrays are written inside square brackets.
"employees":[
    {"firstName":"John", "lastName":"Doe"},
    {"firstName":"Anna", "lastName":"Smith"},
    {"firstName":"Peter", "lastName":"Jones"}
]
In the example above, the object "employees" is an array. It contains three objects.

Each object is a record of a person (with a first name and a last name).