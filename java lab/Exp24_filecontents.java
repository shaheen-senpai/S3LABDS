import java.io.*;
public class Exp24_filecontents {
    public static void main(String args[]) throws IOException,FileNotFoundException {
        FileReader fin=new FileReader("/home/nwlab19/shaheen/Lab Record/test1");
        int chr=0,lines=0,words=0;
        int c=fin.read();
        while(c!=-1){
            
            if(c==32)
                words++;
            else if(c==10)
                lines++;
            else
                chr++;   
            c=fin.read();            
        }
        System.out.println("No of:-\nCharacters: "+chr+"\nLines: "+Math.min(chr,lines+1)+"\nWords: "+Math.min(chr,words+1));
        fin.close();
        

    }
}