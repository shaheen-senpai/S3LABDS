import java.util.*;
public class String_Buffer {

	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in); 
		
		int flag=1;
		String str1,str2;
		System.out.println("Enter the Main String");
		str1=cin.nextLine();
		StringBuffer sb = new StringBuffer(str1); 
		while(flag!=0)
		{
			System.out.println("     MENU       "
					+ "\nEnter 1 to insert a string to the Main String "
					+ "\nEnter 2 to modify a character at a given position "
					+ "\nEnter 3 to append a string at the end "
					+ "\nEnter 0 to EXIT ");
			flag=cin.nextInt();
			
			switch(flag)
			{
			   case 1:
				   System.out.println("Enter the String to be added to the Main String ");
				   str2=cin.next();
				   System.out.println("Enter the index where the String is to be added to the Main String ");
				   int x=cin.nextInt();
				   sb.insert(x-1,str2);
				   System.out.println(sb);
				   break;
				   
			   case 2:
				   System.out.println("Enter the Character to be added to the Main String ");
				   str2=cin.next();
				   System.out.println("Enter the index where the Character is to be added to the Main String ");
				   int y=cin.nextInt();
				   sb.replace(y-1,y,str2);
				   System.out.println(sb);
				   break;
				   
			   case 3:
				   System.out.println("Enter the String to be added to the Main String ");
				   str2=cin.next();
				   sb.append(str2);
				   System.out.println(sb);
				   break;   
			}
		}
		System.out.println("Exiting..... ");
	}
}
