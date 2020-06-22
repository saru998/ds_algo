  //Find String
  import java.io.BufferedReader;
  import java.io.InputStreamReader;
  import java.io.IOException;
  class FindString{

    public static void main(String a[]) throws IOException{
      BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
      int t = Integer.parseInt(br.readLine());
      for(int k = 0; k < t; k++) {
          String[] s = br.readLine().split(" ");
          int size = Integer.parseInt(s[1]);
          String[] dict = br.readLine().split(" ");
          String[] phrase = new String[size];
          for(int i = 0; i < size; i++){
              phrase[i] = br.readLine();
          }
          boolean flag = false;
          for(int i = 0; i < dict.length; i++){
              flag = false;
              for(int j = 0; j < phrase.length; j++){
                  if(phrase[j].contains(dict[i])){
                      flag = true;
                      break;
                  }
              }
              if(flag)
                System.out.print("YES ");
              else
                System.out.print("NO ");

          }
          System.out.println();
        }
    }
  }
