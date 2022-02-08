import java.util.*;
public class Matrix_Multy {
	
	static void multiply(int p[][],int row1,int col1,int q[][],int row2,int col2) 
	{
		int C[][] = new int[row1][col2];
		 
        // Multiply the two matrices
        for(int i=0;i<row1;i++)
            for(int j=0;j<col2;j++)
                for(int k=0;k<row2;k++)
                    C[i][j] += p[i][k] * q[k][j];
        
        System.out.println("answer= ");
        for(int i=0;i<row1;i++) {
            for(int j=0;j<col2;j++)
            { System.out.print(C[i][j] + " ");}
 
            System.out.println();}
	}
        
        

	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in); 
		int r1,c1,r2,c2;
		
		System.out.print("Enter the r1 and c1 of matrix A :");
		r1=cin.nextInt();
		c1=cin.nextInt();
		
		System.out.print("Enter the r2 and c2 of matrix B :");
		r2=cin.nextInt();
		c2=cin.nextInt();
		
		if(c1!=r2)
			System.out.println("Multiplication not possible");
		else
		{ int A[][]=new int[r1][c1];
		  int B[][]=new int[r2][c2];
		  
		  System.out.println("Enter the elements of matrix A row-wise");
		  for(int i=0;i<r1;i++)
			  for(int j=0;j<c1;j++)
				  A[i][j]=cin.nextInt();
		  
		  System.out.println("Enter the elements of matrix B row-wise");
		  for(int i=0;i<r2;i++)
			  for(int j=0;j<c2;j++)
				  B[i][j]=cin.nextInt();
		  
		  multiply(A,r1,c1,B,r2,c2);
		  
		}
		// TODO Auto-generated method stub

	}

}
