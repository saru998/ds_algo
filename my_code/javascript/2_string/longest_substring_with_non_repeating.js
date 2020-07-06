const input = require('./0_js_tookit/input_from_file/input_from_file')

const str = input()

const seen = {}
let i = 0
let max_length = 0

for (let j = 0; j < str.length; j++) {
    if (str[j] in seen) {
        i = Math.max(i,seen[str[j]]+1)
    } 
    seen[str[j]] = j
    max_length = Math.max(max_length,j-i+1)
}

console.log(max_length);


// abcabcbb
// geeksforgeeks