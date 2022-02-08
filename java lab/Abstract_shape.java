import java.util.*;
abstract class Abstract_shape {

	abstract void no_of_sides();
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		int flag=1;
		while(flag!=0)
		{
			System.out.println("     MENU       "
					+ "\nEnter 1 for rectangle "
					+ "\nEnter 2 for triangle "
					+ "\nEnter 3 for hexagon "
					+ "\nEnter 0 to EXIT ");
			flag=cin.nextInt();
			switch(flag)
			{
			   case 1:
				   System.out.println("Rectangle :");
				   rectangle obj1 = new rectangle();
				   obj1.no_of_sides();
				   break;
				   
			   case 2:
				   System.out.println("Triangle :");
				   triangle obj2 = new triangle();
				   obj2.no_of_sides();
				   break;
				   
			   case 3:
				   System.out.println("Hexagon :");
				   hexagon obj3 = new hexagon();
				   obj3.no_of_sides();
				   break;  
			}
		}
	  System.out.println("Exiting..... ");
	}
}
class rectangle extends Abstract_shape
{
	void no_of_sides()
	{
		System.out.println("Sides = 4");
	}
}
class triangle extends Abstract_shape
{
	void no_of_sides()
	{
		System.out.println("Sides = 3");
	}
}
class hexagon extends Abstract_shape
{
	void no_of_sides()
	{
		System.out.println("Sides = 6");
	}
}