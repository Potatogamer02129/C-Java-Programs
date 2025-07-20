import java.util.Scanner;

public class ExceptionHandling {
    public static void main(String[] args){
        try{
        int i=5;
            System.out.println(i);
        }
        catch(ArithmeticException a){
            System.out.println("Zero se divide nahi hota gadhe");
        }
        catch (ArrayIndexOutOfBoundsException e){
            System.out.println("Bhaiyaji array bahar gaya");
        }
        finally {
            System.out.println("Finally ye to hona he tha");
        }
    }
}
