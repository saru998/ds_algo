//2*2 square with b base isosceles triangle
import java.util.*;

class Square {
    static int SumSeries(int f){
        if(f == 0)
          return 0;
        if(f == 1)
            return 1;
        else
          return f + SumSeries(--f);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t --> 0){
            int b = sc.nextInt();
            int f = (b-2)/2;
            System.out.println(SumSeries(f));
        }
    }
}
