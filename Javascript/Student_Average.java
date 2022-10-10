import java.util.Scanner;
public class Student_Average
{
	public static void main(String[] args) 
	{
		int i, high = 0, sum = 0;
		float average = 0;
		int mark[] = new int[5];
		Scanner sc = new Scanner(System.in);
		for(i = 0; i < 5; i++)
		{
			System.out.print("Subject " + (i + 1) + " Mark:");
			mark[i] = sc.nextInt();
			if(mark[i] > high)
				high = mark[i];
			sum = sum + mark[i];
		}
		average = sum / 5;
		System.out.println("Highest Mark is " + high);
		System.out.println("Average Mark is " + average); 
	}
}