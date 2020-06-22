const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin
});

const input = () => {
    return new Promise((resolve, reject) => {
        rl.on('line', (input) => {
            resolve(input)
        })
    });
};

module.exports = input;

