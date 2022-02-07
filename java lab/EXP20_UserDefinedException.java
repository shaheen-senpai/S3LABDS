class UserError extends Exception{
    UserError(){
        //java.awt.Desktop.getDesktop().browse(java.net.URI.create("https://www.youtube.com/watch?v=dQw4w9WgXcQ"));
    }
}

public class EXP20_UserDefinedException {
    public static void main(String args[]){
        try{
            throw new UserError();
        }catch (UserError ue){
            System.out.println("Caught user defined exception from throw:"+ue);
        }

    }
}
