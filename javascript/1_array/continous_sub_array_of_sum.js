const input = require('./js_tookit/input_from_file/input_from_file')

const t = Number(input())

for (let a = 0; a < t; a++) {
   const [len, sum] = input().split(' ').map(x => Number(x))
   const arr = input().split(' ').map(x => Number(x))
   let i = 0
   let j = 0
   let t_sum = arr[0]

   while (i < len && j < len) {
      if (t_sum < sum) {
         j += 1
         t_sum += arr[j]
      } else if (t_sum > sum) {
         t_sum -= arr[i]
         i += 1
      } else {
         console.log(i + 1, j + 1);
         break
      }
   }
}

/*
Input:
2
5 12
1 2 3 7 5
10 15
1 2 3 4 5 6 7 8 9 10
Output:
2 4
1 5
*/