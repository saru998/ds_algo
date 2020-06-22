//rearrange truck using stack and queue
import java.util.*;

class RearrangeTruck {

    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      while(true){
        int t = sc.nextInt();
        if(t == 0)
          break;
        Queue<Integer> road = new LinkedList<>();
        Stack<Integer> street = new Stack<>();
        Stack<Integer> parade = new Stack<>();
        for(int i = 0; i < t; i++)
          road.add(sc.nextInt());
        boolean flag = true;
        for(int i = 0; i < t; i++){
          int cur = road.poll();
          if(road.isEmpty()){
            //last element
            if(parade.peek() > cur){
              flag = false;
              break;
            }
          }
          else if(cur > road.peek()){
            while(!street.isEmpty() && (street.peek() < cur))
                parade.push(street.pop());
            street.push(cur);
          } else {
            if(!parade.isEmpty() && parade.peek() > cur){
              flag = false;
              break;
            }
            parade.push(cur);
          }

        }
        if(flag)
          System.out.println("yes");
        else
          System.out.println("no");
      }

    }
}
