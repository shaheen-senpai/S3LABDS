import java.util.*;

class Rectangle {
	int x,y;
	Scanner cin = new Scanner(System.in);
	Rectangle()
	{
		 System.out.println("Default constructor has been invoked ");
		 System.out.println("Enter the length and breadth ");
		 x=cin.nextInt();
		 y=cin.nextInt();
		 System.out.println("Default perimeter = "+(2*(x+y))+" \n ");
	}
	Rectangle(int a,int b)
	{    
		 x=a;
		 y=b;
		 System.out.println("Parameterized constructor has been invoked ");
		 System.out.println("Perimeter = "+(2*(x+y))+" \n ");
	}
	
}

public class Constructor_perimeter {

	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in); 
		Rectangle obj1 = new Rectangle();
		System.out.println("Enter the length and breadth to be passed to the constructor ");
		int x=cin.nextInt();
		int y=cin.nextInt();
		Rectangle obj2 = new Rectangle(x,y);
	}

}
