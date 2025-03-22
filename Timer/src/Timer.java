import java.util.Scanner;

public class Timer {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter time: ");
        int time = scanner.nextInt();
        for(int i = time ; i >= 0 ; i--){
            System.out.printf("\r%d",i);
            try{
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                throw new RuntimeException(e);
            }
        }

        scanner.close();
    }
}