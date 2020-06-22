import java.io.*;
class MakeArrayEquals
{

	public static void main (String[] args) throws java.lang.Exception
	{
		BufferedReader sc = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(sc.readLine());
		int op = 0;
		for(int i = 0; i < t; i++){
		    int size = Integer.parseInt(sc.readLine());
        String[] salary = sc.readLine().split(" ");
		    // while(true) {
          int max = 0;
					// int max2 = -1;
					int sum=0;
          for(int j = 1; j < size; j++){
							int v = Integer.parseInt(salary[j]);
							sum+=v;
              if(Integer.parseInt(salary[max]) >= v)
                max = j;
							// else
							// 	max2 = j;
          }
				// 	if(max2 == -1)
				// 		break;
				// 	else
				// 		op++;
        //   for(int j = 1; j < size; j++){
        //       if(Integer.parseInt(salary[max2]) < Integer.parseInt(salary[j]) && Integer.parseInt(salary[j]) != Integer.parseInt(salary[max])) {
        //         max2 = j;
        //       }
        //   }
				// 	int diff = Integer.parseInt(salary[max]) - Integer.parseInt(salary[max2]);
        //   for(int j = 0; j < size; j++){
        //     if(j != max)
        //       salary[j] = (Integer.parseInt(salary[j]) + diff) + "";
        //   }
        // }
		    System.out.println(sum-(size*Integer.parseInt(salary[max])));
		}
		sc.close();
	}
}
