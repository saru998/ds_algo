//lapindrome
import java.util.*;

class Lapindrome {

  public static void main(String args[]) {
      Scanner sc = new Scanner(System.in);
      int t = Integer.parseInt(sc.nextLine());
      while(t --> 0) {
          String str = sc.nextLine();
          int a[] = new int[256];
          int i = 0;
          for(; i < str.length()/2; i++) {
              a[str.charAt(i)]++;
          }
          if(str.length() % 2 != 0)
            i++;
          for(; i < str.length(); i++) {
              a[str.charAt(i)]--;
          }
          boolean flag = true;
          for(int j = 0; j < 256; j++){
            if(a[j] != 0)
              flag = false;
          }
          if(flag)
            System.out.println("YES");
          else
            System.out.println("NO");
      }
  }
}
