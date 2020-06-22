//Find 1..1 substring
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

class FindSubstring {

  public static void main(String a[]) throws IOException {
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      int t = Integer.parseInt(br.readLine());
      while(t --> 0){
          int s = Integer.parseInt(br.readLine());
          String num = br.readLine();
          long cnt = 0;
          for(int i = 0; i < s; i++){
            if(num.charAt(i) == '1')
              cnt++;
          }
          System.out.println((cnt*(cnt+1))/2);
      }
      br.close();
  }
}
