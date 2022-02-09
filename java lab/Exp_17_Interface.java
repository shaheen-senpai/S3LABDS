
import java.util.*; 
interface CharSequence
{
	char charAt(int index);
	int length();
	CharSequence subsequence(int start,int end);
	String toString();
}
public class Exp_17_Interface implements CharSequence
{
	String str;
	Exp_17_Interface(String st)
	{
		str=st;
	}
	public String toString() 
	{
		int l=this.length();
		String rev="";
		for(int i=l-1;i>=0;i--)
		{
			rev+=this.charAt(i);
		}
		str=rev;
		return rev;
	}
	public char charAt(int index)
	{
		return str.charAt(index);
	}
	public int length() 
	{
		return str.length();
	}
	public CharSequence subsequence(int start, int end) 
	{
		for(int i=start-1;i<end;i++)
			System.out.print(str.charAt(i));
		return null;
	}
	public static void main(String[] args)
	{
		Scanner in=new Scanner(System.in);
		System.out.println("Enter the string :");
		Exp_17_Interface ob =new Exp_17_Interface(in.nextLine());
		int t=1;
		while(t!=5)
		{
			System.out.println("\nEnter your choice :\n1.LENGTH OF STRING\n2.DISPLAY CHARACTER AT AN INDEX\n3.REVERSE THE STRING\n4.SUBSEQUENCE OF THE STRING\n5.EXIT");
			t=in.nextInt();
			switch(t)
			{
				case 1:
					System.out.println("Lenght of the string : "+ob.length());
				break;
				case 3:
					String rev=ob.toString();
					System.out.println("Reversed String: "+rev);
				break;
				case 4:
					System.out.println("Enter the start and end index of the subsequence :");
					ob.subsequence(in.nextInt(),in.nextInt());
				break;
				case 2:
					System.out.println("Enter the index :");
					
					System.out.println(ob.charAt(in.nextInt()-1));
				break;
					
			}
		}
	}
	
}
