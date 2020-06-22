//check consequtive number plus palindrome: https://github.com/strikersps/Competitive-Programming/tree/master/Code-Chef/Rainbow-Array
import java.io.*;

class PalindromeArray {
    public static void main(String arg[]) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        for(int k = 0; k < t; k++){
            int n = Integer.parseInt(br.readLine());
            String[] arr = br.readLine().split(" ");
            if(n < 13){
              System.out.println("no");
              continue;
            }
            boolean flag = true;
            int sum = 0;
            for(int i = 0; i < n/2; i++){
                if(Integer.parseInt(arr[i]) >= 8 || Integer.parseInt(arr[i]) <= 0 || Integer.parseInt(arr[i+1]) >= 8 || Integer.parseInt(arr[i+1]) <= 0){
                    flag = false;
                    break;
                }
                if(!arr[i].equals(arr[n-1-i])){
                    flag = false;
                    break;
                }
                if(!(arr[i].equals(arr[i+1])) && (Integer.parseInt(arr[i+1]) != 1+Integer.parseInt(arr[i]))){
                    flag = false;
                    break;
                }
                if(Integer.parseInt(arr[i+1]) == 1 + Integer.parseInt(arr[i])){
                  sum+=Integer.parseInt(arr[i]);
                }
            }
            sum+=Integer.parseInt(arr[(n/2)]);
            if(flag && sum == 28)
                System.out.println("yes");
            else
                System.out.println("no");
        }
        br.close();
    }
}
