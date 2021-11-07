/*
* This will start localhost server on port 3000.
*/



const express = require('express');

const app = express();

app.listen('3000', () => {
    console.log('Server started on port 3000');
});