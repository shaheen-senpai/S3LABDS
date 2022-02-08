import java.util.*;
public class Sort_arrayOFstring {

	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in); 
		System.out.print("Enter the no: of strings: ");
		int n=cin.nextInt();
		String array[]=new String[n];
		
		for(int i=0;i<n;i++)
			array[i]=cin.next();
		
		for(int i=0;i<n;i++)
			for(int j=i+1;j<n;j++)
			{
				if(array[j].compareTo(array[i])<0)
				{
					String temp=array[i];
					array[i]=array[j];                         //bubble sort
					array[j]=temp;
				}
				else if(array[j].compareTo(array[i])==0)
				{
				    j++;
				}
			}
		
		for(int i=0;i<n;i++)
			System.out.print(array[i]+" ");
	}
}
