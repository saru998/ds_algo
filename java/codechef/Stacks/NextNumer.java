//stack: print next number

import java.util.*;

class NextNumer {

    public static void main(String[] args) {
        Scanner br = new Scanner(System.in);
        int t = Integer.parseInt(br.nextLine());
        while(t --> 0){
            int n = Integer.parseInt(br.nextLine());
            String[] rev = br.nextLine().split(" ");
            int carry = 1;
            int sum = 0;
            for(int i = n-1; i >= 0; i--){
              sum = Integer.parseInt(rev[i]) + carry;
              carry = sum / 10;
              rev[i] = (sum % 10)+"";
            }
            if(carry == 1)
              System.out.print(carry);
            for(int i = 0; i < n; i++){
              System.out.print(rev[i]);
            }
           System.out.println();
        }
        br.close();
    }
}
