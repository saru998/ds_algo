//reverse polish notation
import java.util.*;

class RPN {
    public static void main(String[] a) {
        Scanner sc =   new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        String op = "+-*/^";
        while(t --> 0) {
          String exp = sc.nextLine();
          Stack<Character> stk = new Stack<>();
          for(int i = 0; i < exp.length(); i++){
            if ((exp.charAt(i) >= 'a' && exp.charAt(i) <= 'z') || (exp.charAt(i) >= 'A' && exp.charAt(i) <= 'Z'))
                System.out.print(exp.charAt(i));
            else if(exp.charAt(i) == ')') {
                while(stk.peek() != '('){
                    System.out.print(stk.pop());
                }
                stk.pop();
            } else if (exp.charAt(i) == '(')
                stk.push(exp.charAt(i));
            else {
              while(!stk.isEmpty() && op.indexOf(stk.peek()) > op.indexOf(exp.charAt(i)))
                System.out.print(stk.pop());
              stk.push(exp.charAt(i));
            }
          }
          while(!stk.isEmpty()) {
            char el = stk.pop();
            if(el != '(')
              System.out.print(el);
          }
          System.out.println();
        }
        sc.close();
    }

}
