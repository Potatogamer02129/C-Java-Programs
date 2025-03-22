import java.util.Scanner;

public class pattern2 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter no. of rows: ");
        int num = scanner.nextInt();
        int i,j;
        for(i=0; i <= num;i++){
            for(int k = 0 ; k < i; k++){
                System.out.print(" ");
            }
            for(j=num-i;j>0;j--){
                System.out.print(j);
            }
            System.out.println();
        }
        scanner.close();
    }
}
