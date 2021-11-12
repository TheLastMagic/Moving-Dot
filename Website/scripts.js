const fs = require('fs');

// SingUp Button Functions

var email;
var password;
var username;
var birthday;

var everythingDone = true;

function SingUpE() {
    var email = document.getElementById("email").value;
    console.log(email);
};

function SingUpP() {
    var password = document.getElementById("password").value;
    console.log(password);
};

function SingUpU() {
    var username = document.getElementById("username").value;
    console.log(username);
};

function SingUpB() {
    var birthday = document.getElementById("birthday").value;
    console.log(birthday);
};


var data = {
    "email": email,
    "password": password,
    "username": username,
    "birthday": birthday
};

if (everythingDone) {
    var JSON_Data = JSON.stringify(data);

    js.writeFile(`Database/${username}.json`, JSON_Data);
};



// SingIn Button Functions

function SingInE() {

};

function SingInP() {

};