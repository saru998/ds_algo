const input = require('./js_tookit/input_from_file/input_from_file')
const testcases = Number(input())
for (let t = 0; t < testcases; t++) {
   n = input()
   arr = input().split(' ').map(x => Number(x))

   //getting max
   max = Math.max(...arr)

   //getting hash table
   f = {}
   for (let i = 0; i < max; i++) {
      f[i] = 0
   }

   //getting freq
   arr.forEach(x => {
      if (f[x]) {
         f[x] += 1
      } else {
         f[x] = 1
      }
   });

   let triplets = 0

   //ncr
   //for 0,0,0
   //0c3
   triplets += f[0] * (f[0] - 1) * (f[0] - 2) / (3 * 2)

   //for 0,x,x
   //0 * xc2
   for (let i = 0; i < max; i++) {
      triplets += f[0] * f[i] * (f[i] - 1) / 2
   }

   //for 2x,x,x
   //2x * xc2
   for (let i = 0; 2 * i < max; i++) {
      triplets += f[2 * i] * f[0] * (f[0] - 1) / 2
   }

   //for x,y,x+y
   // x * y * z
   for (let i = 0; i < max; i++) {
      for (let j = i + 1; j < max; j++) {
         triplets += f[i] * f[j] * (f[i + j] || 0)
      }
   }

   console.log(triplets);

}

// Input:
// 2
// 4
// 1 5 3 2
// 3
// 3 2 7
// Output:
// 2
// -1