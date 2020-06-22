//string hash code
import java.util.*;

class HashCode {
    public static void main(String aśsf[]) {
        Scanner sc = new Scanner(System.in);
        char c = 'a';
        Map<Character, Integer> hash = new HashMap<>();
        for(int i = 0; i < 26; i++){
          hash.put(c, i);
          c++;
        }
        int t  = Integer.parseInt(sc.nextLine());
        while(t --> 0) {
            String s = sc.nextLine();
            int w = 0;
            for(Character ch : s.toCharArray()){
                w += hash.get(ch);
            }
            System.out.print(w+" ");
            int size = s.length - 1;
            if(w < 26) {
                while(size --> 0)
                  System.out.print("a");
                System.out.println(hash.getKey(w));
            } else
                System.out.println("-1");
        }
    }
}
