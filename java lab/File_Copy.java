import java.io.*;
	public class File_Copy 
	{
	    public static void main(String args[]) throws IOException
	    {
	        try 
	        {
	            FileInputStream fin=new FileInputStream("/home/nwlab19/shaheen/Lab Record/test1");
	            System.out.println("file1 opened");
	            
	            FileOutputStream fout=new FileOutputStream("/home/nwlab19/shaheen/Lab Record/empty");
	            System.out.println("file2 opened"); 
	            
	            int s=fin.read();
	            while(s!=-1)
	            {
	                fout.write(s);
	                s=fin.read();
	            }
	            fin.close();
	            fout.close();
	            System.out.println("File data copied and file objects closed");      
	        }
	        catch (FileNotFoundException fne)
	        {
	            System.out.println(fne);
	        }
	    }
	}
