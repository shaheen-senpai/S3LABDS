import java.util.Scanner;
import java.util.StringTokenizer;

public class Exp22_linenos {
    public static void main(String args[]){
        Scanner in=new Scanner(System.in);
        System.out.print("Enter the integers(space seperated):");
        StringTokenizer st= new StringTokenizer(in.nextLine());
        int sum=0;
        while(st.hasMoreTokens()){
            int a=Integer.parseInt(st.nextToken());
            System.out.println(a);
            sum+=a;
        }
        System.out.println("Sum is:"+sum);
        in.close();
    }
}