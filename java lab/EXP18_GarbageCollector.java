class Test{
    public void finalize(){
        System.out.println("object is garbage collected");
    }  
}
public class EXP18_GarbageCollector{
    public static void main(String args[]){
        Test s1=new Test();  
        Test s2=new Test();  
        s1=null;  
        s2=null;  
        System.gc();
        s1=s2;s2=s1;//To remove unused variable error.
        //java.awt.Desktop.getDesktop().browse(java.net.URI.create("https://www.youtube.com/watch?v=dQw4w9WgXcQ")); 
    }
}