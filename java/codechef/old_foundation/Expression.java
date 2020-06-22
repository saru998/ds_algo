//solving p() abd q() expression
import java.util.*;

class Expression{
    public static void main(String[] ar) {
        Scanner sc =  new Scanner(System.in);
        int t = sc.nextInt();
        if(t >= 10)
            return;
        while(t --> 0){
            int np = sc.nextInt();
            int nq = sc.nextInt();
            long[] p = new long[np];
            long[] q = new long[nq];
            for(int i =0; i < np; i++){
              p[i] = sc.nextInt();
            }
            for(int i =0; i < nq; i++){
              q[i] = sc.nextInt();
            }
            long[] a = new long[np+nq-1];
            for(int i = 0; i < np; i++){
                for(int j = 0; j < nq; j++){
                    a[i+j] = a[i+j] + (p[i] * q[j]);
                }
            }
            String ans = "";
            ans.trim();
            for(int i =0; i < a.length; i++)
              ans += a[i]+" ";
            System.out.println(ans.trim());
        }
    }
}
