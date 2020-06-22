//find boundary
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class FindBoundary{
  public static void main(String args[]) throws IOException {
    BufferedReader br =  new BufferedReader(new InputStreamReader(System.in));
    int t = Integer.parseInt(br.readLine());
    for(int k = 0; k < t; k++){
      String[] sizes = br.readLine().split(" ");
      String[] cops = br.readLine().split(" ");
      int window = Integer.parseInt(sizes[1]) * Integer.parseInt(sizes[2]);
      int safe = 0;
      int[] house = new int[101];
      for(int j = 0; j < Integer.parseInt(sizes[0]); j++){
            int cop = Integer.parseInt(cops[j]);
            int start = cop-window >= 1? cop-window:1;
            int end = cop+window <= 100? cop+window:100;
            for(int i = start; i <= end; i++)
              house[i] = 1;
      }
      for(int i = 1; i <= 100; i++){
        if(house[i] == 0)
          safe++;
      }
      System.out.println(safe);
    }
    br.close();
  }
}
