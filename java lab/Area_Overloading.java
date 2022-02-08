import java.util.*;
public class Area_Overloading {

	public int area(int x,int y)
	{
		return (2*(x+y));
	}
	
	public double area(int x)
	{
		return (3.14*x*x);
	}
	
	public double area(double x,double y,double z)
	{
		double s= (x+y+z)/2;
		return ( (double)Math.sqrt(s*(s-x)*(s-y)*(s-z)) );
	}
	
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in); 
		int flag=1;
		while(flag!=0)
		{
		  System.out.println("        MENU \nEnter 1 for area of circle \nEnter 2 for area of rectangle \nEnter 3 for area of traingle \nEnter 0 to EXIT");
		  flag=cin.nextInt();
		  Area_Overloading obj=new Area_Overloading();
		  
		  switch(flag)
		  {
		  case 0:
		      System.out.print("Exiting the program.....");
		      break;
		  case 1:
			  System.out.print("Enter the radius of the circle :");
			  int r=cin.nextInt();
			  System.out.println("Area of circle = "+obj.area(r));
			  break;
		  case 2:
			  System.out.print("Enter the length and breadth of the rectangle :");
			  int l=cin.nextInt();
			  int b=cin.nextInt();
			  System.out.println("Area of rectangle = "+obj.area(l,b));
			  break;
		  case 3:
			  System.out.print("Enter the 3 sides of the triangle :");
			  double o=cin.nextDouble();
			  double m=cin.nextDouble();
			  double n=cin.nextDouble();
			  System.out.println("Area of triangle = "+obj.area(o,m,n));
			  break;
		  }
		  
		}
		
	}

}
