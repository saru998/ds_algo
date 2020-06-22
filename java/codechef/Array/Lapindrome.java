//find lapindrome
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

class Lapindrome{

    public static void main(String a[]) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        while(t --> 0){
            String input = br.readLine();
            int[] arr = new int[256];
            int s = input.length();
            boolean flag = true;
            for(int i = 0; i < s/2; i++){
                arr[input.charAt(i)]+=1;
            }
            int begin = s/2;
            if(s % 2 != 0)
              begin = (s/2)+1;
            for(int i = begin; i < s; i++){
              arr[input.charAt(i)]-=1;
            }

            for(int i = 0; i < 256; i++){
                if(arr[i] != 0){
                  flag = false;
                  break;
                }
            }
            if(flag)
              System.out.println("YES");
            else
              System.out.println("NO");
        }

        br.close();
    }
}
