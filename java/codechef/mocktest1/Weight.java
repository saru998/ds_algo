//nth minimun sort
import java.util.*;

class Weight{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t --> 0) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            int[] weight = new int[n];
            int i = 0;
            for( ; i< n; i++){
              weight[i] = sc.nextInt();
            }
            i = 0;
            k = k < n-k ? k : n-k;
            int min = 0;
            while(i < k){
              for(int j = i+1; j < n; j++){
                if(weight[min] > weight[j]){
                  min = j;
                }
              }
              if(weight[i] > weight[min]){
                weight[i] = weight[i] + weight[min];
                weight[min] = weight[i] - weight[min];
                weight[i] = weight[i] - weight[min];
              }
              i++;
            }
            int sum = 0;

            for(i = 0; i < n; i++){
                if(i < k)
                  sum -= weight[i];
                else
                  sum += weight[i];
            }
            System.out.println(sum);
        }
    }
}
