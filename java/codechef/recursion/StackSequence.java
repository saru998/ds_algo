//sequence in stack
import java.util.*;

class CustomStack{
    public String[] stk;
    public int top;
}

class StackSequence {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t --> 0) {
            int threads = Integer.parseInt(sc.nextLine());
            CustomStack[] list = new CustomStack[threads];
            for(int k = 0; k < threads; k++){
              list[k] = new CustomStack();
              list[k].stk = sc.nextLine().split(" ");
              list[k].top = list[k].stk.length - 1;
            }

            String[] seq = sc.nextLine().split(" ");
            int current = 0;
            boolean flag = true;
            for(int j = 0; j < seq.length; j++){
              for(int i = 0; i < threads; i++){
                  if(list[i].stk[list[i].top].equals(seq[j])){
                    list[i].top = list[i].top - 1;
                    current++;
                    break;
                  }
              }
              if(j == current){
                flag = false;
                break;
              }
            }
            if(flag)
              System.out.println("Yes");
            else
              System.out.println("No");
        }
    }
}
