const input = require('./js_tookit/input_from_file/input_from_file')

arr = input().split(' ').map(x => Number(x))
max = -Infinity
sum = 0
s=0
e=0

for (let i = 0; i < arr.length; i++) {
   sum += arr[i]

   if (sum > max) {
      max = sum
      e=i
   }
   if (sum < 0) {
      sum = 0
      s=i+1
   }
}

console.log(max);
console.log(s,e);


/*
Input
-2 -3 4 -1 -2 1 5 -3
*/