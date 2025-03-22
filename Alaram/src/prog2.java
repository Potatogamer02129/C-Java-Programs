import java.util.Scanner;

public class prog2 {
    // to input 20 nums and print the total number of below 10 and above 10
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int above = 0 , below = 0;
        for(int i = 0 ; i < 5 ; i++ ){
            System.out.print("Enter a number : ");
            int num = scanner.nextInt();
            if(num > 10) above++;
            else below++;
        }
        System.out.println("Numbers above 10 are " + above + " and below 10 are " + below);
        scanner.close();
    }
}
