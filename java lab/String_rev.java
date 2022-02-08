import java.util.*;
public class String_rev {

	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in); 
		System.out.println("Enter the string:");
		String str;
		str=cin.nextLine();
		int n=str.length();
		
		for(int i=n-1;i>=0;i--)
			System.out.print(str.charAt(i)+ "");
		
	}
}
