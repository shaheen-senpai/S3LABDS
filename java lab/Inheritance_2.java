import java.util.*;

public class Inheritance_2 {

	String name,address;
	int age,mobno,salary;
	
	void printsalary()
	{
		System.out.println("salary :" +salary+ "\n");
	}
	void display()
	{
		System.out.println("Name :"+name+
				           "\n Age :"+age+
				           "\n phone no :"+mobno+
				           "\n Address :"+address);
	}
	
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		System.out.println("Enter the details of officer as name,address,age,phone no,salary");
		String name=cin.nextLine(),address=cin.nextLine();
		int age=cin.nextInt(),mobno=cin.nextInt(),salary=cin.nextInt();
		
		officer obj1 = new officer(name,address,age,mobno,salary);
		obj1.printsalary();
		
		System.out.println("Enter the details of manager as name,address,age,phone no,salary");
	    name=cin.nextLine();
	    address=cin.nextLine();
	    age=cin.nextInt();
	    mobno=cin.nextInt();
	    salary=cin.nextInt();
		
		manager obj2 = new manager(name,address,age,mobno,salary);
		obj2.printsalary();
	}
}

class officer extends Inheritance_2
{   Scanner cin = new Scanner(System.in);
	String spec;
	officer (String name,String address,int age,int mobno,int salary)
	{
		this.name=name;
		this.age=age;
		this.mobno=mobno;
		this.address=address;
		System.out.println("Enter Specialization : ");
		this.spec=cin.nextLine();
		this.salary=salary;
		display();
		print_spec();
	}
	void print_spec()
	{
		System.out.println("Specialization : "+spec);
	}
}

class manager extends Inheritance_2
{   Scanner cin = new Scanner(System.in);
	String dept;
	manager (String name,String address,int age,int mobno,int salary)
	{
		this.name=name;
		this.age=age;
		this.mobno=mobno;
		this.address=address;
		System.out.println("Enter Department : ");
		this.dept=cin.nextLine();
		this.salary=salary;
		display();
		print_dept();
	}
	void print_dept()
	{
		System.out.println("Department : "+dept);
	}
}
