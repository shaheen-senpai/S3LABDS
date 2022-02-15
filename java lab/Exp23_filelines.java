import java.io.*;
public class Exp23_filelines {
    public static void main(String args[]) throws FileNotFoundException,IOException{
        BufferedReader br=new BufferedReader(new FileReader("/home/nwlab19/shaheen/Lab Record/test1"));
        String s=br.readLine();
        int i=1;
        while(s!=null){
            System.out.println((i++)+"."+s);
            s=br.readLine();
        }
        br.close();
    }
}