//addition of divisible
import java.util.*;

class Minion {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t --> 0) {
          int n = sc.nextInt();
          int k = sc.nextInt();
          int[] minion = new int[n];
          for(int i = 0; i < n; i++){
              minion[i] = sc.nextInt();
          }
          int count = 0;
          for(int i = 0; i < n; i++){
              if((minion[i] + k) % 7 == 0)
                count++;
          }
          System.out.println(count);

        }
    }
}
