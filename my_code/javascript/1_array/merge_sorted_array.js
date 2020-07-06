const input = require('./js_tookit/input_from_file/input_from_file')
const testcases = Number(input())

for (let t = 0; t < testcases; t++) {

   [n, m] = input().split(' ').map(x => Number(x))
   a = input().split(' ').map(x => Number(x))
   b = input().split(' ').map(x => Number(x))
   c = new Array(n + m)

   if (n == m) {

      let i = j = k = 0;

      while (i < n && j < m) {
         if (a[i] < b[j]) {
            c[k] = a[i]
            k += 1
            i += 1
         } else {
            c[k] = b[j]
            k += 1
            j += 1
         }
      }

   } else if (n < m) {

      let i = j = k = 0;

      while (i < n && j < m) {
         if (a[i] < b[j]) {
            c[k] = a[i]
            k += 1
            i += 1
         } else {
            c[k] = b[j]
            k += 1
            j += 1
         }
      }

      while (j < m) {
         c[k] = b[j]
         k += 1
         j += 1
      }

   }
   else if (n > m) {

      let i = j = k = 0;

      while (j < m) {
         if (a[i] < b[j]) {
            c[k] = a[i]
            k += 1

         } else {
            c[k] = b[i]
            k += 1
         }
         j += 1
      }

      while (i < n) {
         c[k] = a[i]
         k += 1
         i += 1
      }
   }

   console.log(c);

}


/*
2
4 5
1 3 5 7
0 2 6 8 9
2 3
10 12
5 18 20
*/