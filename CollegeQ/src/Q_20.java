
import java.util.Scanner;

public class Q_20 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a DNA String: ");
        String DNA = scanner.next();
        System.out.printf("Enter a Search Sequence: ");
        String search = scanner.next();
        int index = DNA.indexOf(search);
        System.out.printf("Number of Nucleotides before this sequence are %d and after the Sequence are %d", index, DNA.length() - (index + search.length()));
        scanner.close();
    }
}
