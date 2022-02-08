import java.util.*;
public class Frequency_string {

	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in); 
		System.out.println("Enter the string:");
		String str;
		str=cin.nextLine();
		
		int freq[]=new int[26];
		char ch='a',flag;
		
		System.out.println("Enter the character to count:");
		flag=cin.next().charAt(0);
		
		for(int i=0;i<str.length();i++)
			freq[str.charAt(i)-'a']++;       //increments only when encountered
		
		for(int i=0;i<26;i++,ch++)
		{
			if(freq[i]!=0 && ch==flag)
			{  
				System.out.println("Frequency of "+ch+" = "+freq[i]);
			}
			else if(freq[i]==0 && ch==flag)
			{  
				System.out.println("charcter not found");
			}
			
		}	
		// TODO Auto-generated method stub
	}
}
