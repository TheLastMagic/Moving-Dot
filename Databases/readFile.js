const fs = require('fs');

fs.readFile('path/to/file.json', 'utf8', function(err, data) {
    console.log(data);
});