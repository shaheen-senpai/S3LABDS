
public class EXP19_TryCatchThrow {
    public static void main(String args[]){
        //java.awt.Desktop.getDesktop().browse(java.net.URI.create("https://www.youtube.com/watch?v=dQw4w9WgXcQ"));
        try{
            int a=1/0;
            a=a+10;//To remove unused variable warning
        }catch (ArithmeticException ae){
            System.out.println("Caught exception from try:"+ae);
            try{
                throw new ArrayIndexOutOfBoundsException();
            }catch (ArrayIndexOutOfBoundsException ai){
                System.out.println("Caught exception from throw:"+ai);
            }
        }
    }
}
