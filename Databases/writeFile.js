var fs = require('fs');
const name = 'V';

const info001 = {
    what: 'info',
    is: 'this'
};


fs.writeFile(`../Databases/JSON/${name}.json`, `${JSON.stringify(info001)}`, function(err, data) {
    console.log(data);
});



console.log(`Heloo ${info001}`);
