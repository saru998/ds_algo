//find max at ith index
import java.util.*;

class MaxAtI {
  public static void main(String[] ar) {
      Scanner sc = new Scanner(System.in);
      int t = sc.nextInt();
      while(t-->0){
          int Ngame = sc.nextInt();
          int Nquery = sc.nextInt();
          int[] maxAtI = new int[Ngame+1];
          maxAtI[1] = sc.nextInt();
          int max = 1;
          for(int i = 2; i <= Ngame; i++){
            int value = sc.nextInt();
            if(value > maxAtI[i-1])
              maxAtI[i] = value;
            else
              maxAtI[i] = maxAtI[i-1];
          }
          int[] query = new int[Nquery];
          for(int i = 0 ; i < Nquery; i++){
              query[i] = sc.nextInt();
          }
          for(int i = 0 ; i < Nquery; i++){
              System.out.println(maxAtI[query[i]]);
          }
      }
  }
}
