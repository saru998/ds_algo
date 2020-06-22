import java.io.*;
class CanBuy
{
	public static void main (String[] args) throws java.lang.Exception
	{
		BufferedReader sc = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(sc.readLine());
		boolean canBuy;
		for(int i = 0; i < t; i++){
		    canBuy = false;
		    String[] input = sc.readLine().split(" ");
		    int size = Integer.parseInt(input[3]);
        int remaining = Integer.parseInt(input[0]) - Integer.parseInt(input[1]);
        String[] book;
		    for(int j = 0; j < size; j++){
            book = sc.readLine().split(" ");
		        if(Integer.parseInt(book[0]) >= remaining && Integer.parseInt(book[1]) <= Integer.parseInt(input[2]))
                canBuy = true;
		    }
		    if(canBuy)
		        System.out.println("LuckyChef");
		    else
		        System.out.println("UnluckyChef");
		}
		sc.close();
	}
}
