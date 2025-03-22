import java.util.Scanner;

public class pattern {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int i,j;
        int num = scanner.nextInt();
        for(i=1 ; i <= num ; i++){
            System.out.print("*");
            for(j=1 ; j<=i ; j++){
                System.out.print(j);
            }
            System.out.println("*");
        }
        scanner.close();
    }
}
