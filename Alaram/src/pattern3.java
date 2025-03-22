import java.util.Random;
import java.util.Scanner;

public class pattern3 {
    public static void main(String[] args){
        Random random = new Random();
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter no. of rows: ");
        int num = scanner.nextInt();
        int i,j;
        for(i=0; i <= num;i++){
            for(int k = num-i; k > 0; k--){
                System.out.print(" ");
            }
            for(j=1;j<=i;j++){
                System.out.print(j);
            }
            System.out.println();
        }
        for(i=1 ; i < num ; i++){

        }
        scanner.close();
    }
}
