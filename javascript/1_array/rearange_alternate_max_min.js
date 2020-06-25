const input = require('../0_js_tookit/input_from_file/input_from_file')
const testcases = Number(input())

for (let t = 0; t < testcases; t++) {

   n = input().split(' ').map(x => Number(x))
   let arr = input().split(' ').map(x => Number(x))
   arr.sort((a, b) => a - b)
   
   len = arr.length - 1

   max_ele = arr[len] + 1
   max_index = len
   min_index = 0

   for (let i = 0; i < arr.length; i++) {

      if (i % 2 == 0) {
         arr[i] += (arr[max_index] % max_ele) * max_ele
         max_index -= 1
      } else {
         arr[i] += (arr[min_index] % max_ele) * max_ele
         min_index += 1
      }
   }

   for (let i = 0; i < arr.length; i++) {
      arr[i] = Math.floor(arr[i]/max_ele)
   }

   console.log(arr);
}

// 2
// 6
// 1 2 3 4 5 6
// 11 
// 10 20 30 40 50 60 70 80 90 100 110