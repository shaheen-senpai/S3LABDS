import java.util.*;
public class Transpose {

	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in); 
        int r,c;
		
		System.out.print("Enter the row and column of matrix :");
		r=cin.nextInt();
		c=cin.nextInt();
		
		int A[][]=new int[r][c];
		
		System.out.println("Enter the elements of matrix row-wise");
		  for(int i=0;i<r;i++)
			  for(int j=0;j<c;j++)
				  A[i][j]=cin.nextInt();
		  
		System.out.println("Transpose of marix = ");
		  for(int i=0;i<c;i++) {
			  for(int j=0;j<r;j++)
				  {System.out.print(A[j][i] + " ");}
			  System.out.println();}
		
		// TODO Auto-generated method stub

	}

}
