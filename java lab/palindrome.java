import java.util.*;
public class palindrome {

	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in); 
		System.out.println("Enter the string:");
		String str;
		str=cin.nextLine();
		int n=str.length();
		
		boolean flag=true;
		
		for(int i=0,j=n-1;i<n/2 ;i++,j--)
		{
			if( str.charAt(i)!=str.charAt(j) )
				flag=false;
		}
		
		if(flag)
			System.out.println("The string is palindrome");
		else
			System.out.println("The string is not palindrome");
	}
}
