class Employee{
	void display()
	{
	    System.out.println("classname: Employee ");
	}
	
	void calc_salary()
	{
		System.out.println("Salary of Employee = 20,000 ");
	}
}
class Engineer extends Employee{
	void calc_salary()
	{   super.calc_salary();
		System.out.println("Salary of Engineer = 10,000 ");
	}
	void display()
	{   super.display();
	    System.out.println("classname: Engineer ");
	}
}
public class Inheritance {

	public static void main(String[] args) {
		Engineer obj = new Engineer();
		obj.display();
		obj.calc_salary();

	}
}
