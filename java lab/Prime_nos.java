
import java.util.*;
public class Prime_nos {

	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in); 
		int n;
		System.out.print("Enter the no: to check :");
		n=cin.nextInt();
		boolean flag=false;
		
		for(int i=2;i<=n/2;i++)
		{
			if(n%i==0)
				flag=true;
			
		}
		if(n==1)
			flag=true;
		
		if(flag)
			System.out.print("The no:"+n+ " was not prime");
		else
			System.out.print("The no:"+n+ " is prime");
			
		// TODO Auto-generated method stub

	}

}
