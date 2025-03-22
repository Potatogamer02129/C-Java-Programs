import java.util.Scanner;

public class Q_13 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a DNA String: ");
        String DNA = scanner.next();
        System.out.printf("Enter a Search Sequence: ");
        String search = scanner.next();
        int count=0;
        int i=0;
        int index = 0;
        while((index=DNA.indexOf(search,index))!=-1){
            index = index+1;
            count++;
        }
        System.out.printf("The Search sequence occurs %d time in the DNA string\n",count);
        scanner.close();
    }
}
