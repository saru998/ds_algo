const input = require('./0_js_tookit/input_from_file/input_from_file')

const arr = input().split(" ").map(x => Number(x))

let start = 0
let mid = 1
let end = arr.length-1

while (mid < end) {
    if (arr[mid] == 0) {
        [arr[start], arr[mid]] = [arr[mid], arr[start]]
        start += 1
        mid += 1
    } else if (arr[mid] == 1) {
        mid += 1
    }else{
        [arr[end], arr[mid]] = [arr[mid], arr[end]]
        end -= 1
    }
}

console.log(arr);

// 0 1 1 0 1 2 1 2 0 0 0 1


