
import java.util.*;
class Student{
	int rollnumber;
	void getNumber() 
    {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the RollNumber:");
	    rollnumber=sc.nextInt();
	}
	void putNumber() 
    {
		System.out.println("\nThe RollNumber is"+" "+rollnumber);
	}
}
class Test extends Student
{
	float term1,term2;
	Scanner s=new Scanner(System.in);
	void getMarks() 
    {
		System.out.println("Enter marks of term 1");
		term1=s.nextFloat();
		System.out.println("Enter marks of term 2");
		term2=s.nextFloat();
	}
	void putMarks() 
    {
		System.out.println("Marks obtained are:");
		System.out.println("Part 1:"+term1+"\nPart 2:"+term2);
	}
}
interface sports
{
	final float sportWt=6.0F;
	void putWt();
	}
class Result extends Test implements sports
{
	float total;
	public void putWt() 
    {
		System.out.println("Sports Weightage="+sportWt);
	}
	void display() 
    {
		total=term1+term2+sportWt;
		putNumber();
		putMarks();
		putWt();
		System.out.println("Total score="+total);
	}
}
public class EXP_17Multipleinheritance 
{

	public static void main(String[] args) 
    {
	Result Student1=new Result();
	Student1.getNumber();
	Student1.getMarks();
	Student1.display();
	}

}