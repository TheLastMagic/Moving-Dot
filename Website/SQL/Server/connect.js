/*
* This Script is built in Javascript (JS)
* This JS Script needs to be in every file  
* that is interacting with MySQL server.
* You need two node libraries express and mysql.
* Go to the terminal and type npm install --save express mysql.
* That will install you the libaries you need.
*/

const express = require('express');
const mysql = require('mysql');

// Create Connection

const db = mysql.createConnection({
    host: 'localhost',
    user: 'root',
    password: ''
});

// Connect to MySQL

db.connect(err => {
    if (err) {
        throw err;
    }
    console.log('Connected to MySQL');
});

const app = express();