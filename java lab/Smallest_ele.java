import java.util.*;
public class Smallest_ele {

	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in); 
		System.out.print("Enter the SIZE of the araay :");
		int n;
		n=cin.nextInt();
		int a[]=new int[n];
		System.out.print("Enter the ELEMENTS of the araay :");
		
		for(int i=0;i<n;i++)
			a[i]=cin.nextInt();
		
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
			{
				if(a[j]>a[i])
				{
					int temp=a[i];
					a[i]=a[j];                         //bubble sort
					a[j]=temp;
				}
			}
		
		int flag=a[n-1];
		boolean trigger=false;
		
		for(int i=n-1;i>=0;i--)
		{
			if(flag==a[i])
				trigger=false;
			else
				trigger=true;
			
			if(trigger) 
			{
				System.out.println("2nd smallest element is = "+a[i]);
				break;
			}
				
		}
			
		// TODO Auto-generated method stub

	}

}
