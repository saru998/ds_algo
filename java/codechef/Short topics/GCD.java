//Euclids method GCD;

import java.util.*;

class GCD {
    static int calGCD(int a, int b) {
        return b == 0 ? a : calGCD(b, a % b);
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t --> 0) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            System.out.println(calGCD(a, b));

        }
    }
}
