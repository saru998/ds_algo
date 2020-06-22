import java.io.*;
class SumOfArray
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// Scanner sc = new Scanner(System.in);
		// int t = Integer.parseInt(sc.nextInt());
		// int candies;
		// for(int i = 0; i < t; i++){
		//     candies = 0;
		//     String[] input = sc.nextLine().split(" ");
		//     int size = Integer.parseInt(input[0]);
		//     String[] candy = sc.nextLine().split(" ");
		//     for(int j = 0; j < size; j++){
		//         candies += Integer.parseInt(candy[j]);
		//     }
		//     if(Integer.parseInt(input[1]) >= candies)
		//         System.out.println("Yes");
		//     else
		//         System.out.println("No");
		// }
		// sc.close();

		BufferedReader sc = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(sc.readLine());
		int candies;
		for(int i = 0; i < t; i++){
		    candies = 0;
		    String[] input = sc.readLine().split(" ");
		    int size = Integer.parseInt(input[0]);
		    String[] candy = sc.readLine().split(" ");
		    for(int j = 0; j < size; j++){
		        candies += Integer.parseInt(candy[j]);
		    }
		    if(Integer.parseInt(input[1]) >= candies)
		        System.out.println("Yes");
		    else
		        System.out.println("No");
		}
		sc.close();
	}
}
