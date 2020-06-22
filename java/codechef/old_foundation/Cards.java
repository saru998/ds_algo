//card game
import java.util.*;

class Cards {
    public static void main(String args[]) {

        Scanner sc =  new Scanner(System.in);
        int t = sc.nextInt();
        while(t --> 0){
            int ncard = sc.nextInt();
            int npile = sc.nextInt();
            Queue<Integer> r = new LinkedList<>();
            Queue<Integer> g = new LinkedList<>();
            Queue<Integer> pile = new LinkedList<>();
            for(int i = 0; i < ncard; i++){
                r.add(sc.nextInt());
            }
            for(int i = 0; i < ncard; i++){
                g.add(sc.nextInt());
            }
            for(int i = 0; i < npile; i++){
                pile.add(sc.nextInt());
            }
            int rpoint = 0;
            int gpoint = 0;
            while(!r.isEmpty()){
              if(r.poll() > g.poll()) {
                rpoint++;
                if(!pile.isEmpty()){
                    r.add(pile.poll());
                    g.add(pile.poll());
                }
              } else {
                gpoint++;
                if(!pile.isEmpty()){
                    g.add(pile.poll());
                    r.add(pile.poll());
                }
              }

            }
            if(rpoint > gpoint)
              System.out.println("Radhesh wins");
            else if(rpoint < gpoint)
              System.out.println("Geethakoomaree wins");
            else
              System.out.println("Tie");
        }
    }
}
