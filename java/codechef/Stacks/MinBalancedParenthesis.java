//min balance parethesis
import java.util.*;

class MinBalanceParenthesis {

    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        int t = 0;
        while(true) {
          String exp = sc.nextLine();
          if(exp.matches("-+"))
            break;
          t++;
          int count = 0;
          Stack<Character> op = new Stack<>();
          for(int i =0; i < exp.length(); i++){
            if(exp.charAt(i) == '}' && !op.isEmpty() && op.peek() == '{'){
                op.pop();
            }
            else {
                op.push(exp.charAt(i));
            }
          }
          while(!op.isEmpty()){
              Character first = op.pop();
              Character second = op.pop();
              if (first.equals(second))
                    count++;
              else
                    count += 2;
          }
          System.out.println(t+". "+count);
        }
    }
}
