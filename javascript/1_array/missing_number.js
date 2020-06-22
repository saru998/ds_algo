const input = require('./js_tookit/input_from_file/input_from_file')
const testcases = Number(input())
for (let t = 0; t < testcases; t++) {
   n = Number(input())
   arr = input().split(' ').map(x => Number(x))
   
   final_sum = n*(n+1)/2
   console.log(final_sum);
   
   actual_sum = arr.reduce((a, b) =>a + b, 0);
   console.log("missing_number",final_sum-actual_sum)
}


/**
 * INPUT
2
5
1 2 3 5
10
1 2 3 4 5 6 7 8 10
 */