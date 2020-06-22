//maximum balanced brackets
import java.util.*;

class MaxBalBrackets {

    public static void  main(String a[]) {

        Scanner sc = new Scanner(System.in);
        String exp = sc.nextLine();
        Stack<Character> op = new Stack<>();
        int max = 0;
        int cnt = 0;
        int temp = 0;
        for(Character ch : exp.toCharArray()){
          if(ch == '(')
            op.push(ch);
          else{
            if(!op.isEmpty() && op.peek() == '('){
              op.pop();
              temp += 2;
            } else {
                if(temp > max) {
                    max = temp;
                    cnt = 1;
                } else if(temp == max && max > 0)
                    cnt++;
                temp = 0;
            }

          }
        }
        if(temp > max) {
            max = temp;
            cnt = 1;
        }else if(temp == max && max > 0)
            cnt++;
        if(max == 0)
            System.out.println("0 1");
        else
            System.out.println(max+" "+cnt);
    }
}
