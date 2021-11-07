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

// Create database
app.get('/createdb', (req, res) => {
    let sql = "CREATE TABLE database";
    db.query(sql, err => {
        if (err) {
            throw err;
        }
        res.send('Database created successfully');
    });
});

app.listen('3000', () => {
    console.log('Server started on port 3000');
});