//string of bits to  decimal
import java.util.*;
class BitsString {

    static int stringToDec(String str) {
        char[] bits = str.toCharArray();
        int num = 0;
        for(int i = 0; i < str.length(); i++) {
            num += (Character.getNumericValue(str.charAt(i)) * Math.pow(2, str.length() - i - 1));
        }
        return num;
    }

    static int strComb(String s, int i, int div){
      int count = 0;
      if(i == s.length()){
        int num = stringToDec(s);
        if(num % div == 0)
            return 1;
        else
            return 0;
      } else {
        if(s.charAt(i) == '_'){
                String str0 = s.substring(0,i) +"0"+s.substring(i+1,s.length());
                String str1 = s.substring(0,i) +"1"+s.substring(i+1,s.length());
                i++;
                count = strComb(str0, i, div) + strComb(str1, i, div);
        } else {
          i++;
          count = strComb(s, i, div);
        }

      }
      return count;
    }


    public static void main(String[] arg) {

        Scanner sc =  new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t --> 0){
            int k = Integer.parseInt(sc.nextLine().split(" ")[1]);
            String s = sc.nextLine();
            int i = 0;
            System.out.println(strComb(s, i, k));
        }

    }
}
