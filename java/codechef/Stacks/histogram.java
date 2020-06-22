//max area histogram
import java.util.*;

class histogram {
  static int getMaxArea(int hist[]) {
	  int t = hist.length;
	  int i = 0;
	  int max = 0;
	  int area = 0;
	  Stack<Integer> s = new Stack<>();
	  while(i < t) {
		  if(s.isEmpty() || hist[s.peek()] <= hist[i])
			  s.add(i++);
		  else {
			  area = hist[s.pop()] * (s.isEmpty() ? i : i-1 - s.peek());
			  if(area > max)
				  max = area;
		  }
	  }
	  while(!s.isEmpty()) {
		  area = hist[s.pop()] * (s.isEmpty() ? i : i-1 - s.peek());
		  if(area > max)
			  max = area;
	  }
	  return max;
  }
   static int bruteForce(int hist[], int max) {
	   int ans = 0;
       for(int i = 1; i <= max; i++){
           int cnt = 0;
           for(int j = 0; j < hist.length; j++){
               if(hist[j] >= i){
                   cnt++;
               } else {
                   if((cnt * i) > ans)
                     ans = cnt*i;
                   cnt = 0;
               }
           }
           if((cnt * i) > ans)
             ans = cnt*i;
       }
       return ans;
   }
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        while(true){
            int t = sc.nextInt();
            if(t == 0)
              break;
            int[] hist = new int[t];
            int val = sc.nextInt();
            hist[0] = val;
            int max = val;
            for(int i = 1; i < t; i++){
              val = sc.nextInt();
              hist[i] = val;
              if(val > max)
                max = val;
            }
            System.out.println(getMaxArea(hist));	//Efficient approach
            System.out.println(bruteForce(hist, max));	//Non-Efficient approach
        }
        sc.close();
    }
}
