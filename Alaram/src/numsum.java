import java.util.Scanner;

public class numsum {
    public static void main(String[] args) {
        // write a program to input from the users and Reinput the value
        int sum = 0;
        int num = 0;
        Scanner scanner = new Scanner(System.in);
        while(num != -1){
            System.out.print("Enter a Number (-1 to exit) : ");
            num = scanner.nextInt();
            if(num > 0 && num <= 20){
                sum+=num;
            }
        }
        System.out.println("The sum of all the number smaller than 20 is " + sum);
        scanner.close();
    }
}