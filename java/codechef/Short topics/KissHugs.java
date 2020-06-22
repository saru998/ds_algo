//calculate base^exp in O(log n)
import java.util.*;
class KissHugs {
    static long calculateValue(long num){
        long res = 1;
        long mod = 1000000007;
        long base = 2;
        while(num > 0){
            if(num % 2 == 1)
              res = (res * base) % mod;
            base = (base * base) % mod;
            num /= 2;
        }
        return res % mod;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t --> 0){
            long num = sc.nextInt();
            System.out.println(calculateValue(num));
        }
    }
}
