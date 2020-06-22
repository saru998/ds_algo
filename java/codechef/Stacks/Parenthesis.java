//valid parenthesis
import java.util.*;

class Parenthesis {

    public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      int t = Integer.parseInt(sc.nextLine());
      while(t --> 0){
          String exp = sc.nextLine();
          Stack<Character> op = new Stack<>();
          int valid = 0;
          for(int i = 0; i < exp.length(); i++){
              if(exp.charAt(i) == '<')
                op.push(exp.charAt(i));
              else {
                if(!op.isEmpty() && op.peek() == '<'){
                    op.pop();
                    if(op.isEmpty())
                      valid = i+1;
                } else break;
              }
          }
          System.out.println(valid);
      }
    }
}
