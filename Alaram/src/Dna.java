import java.util.Scanner;

public class Dna {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String dnastr, compl = "";
        System.out.print("Enter a DNA string: ");
        dnastr = scanner.nextLine();
        int i;
        for (i = 0; i < dnastr.length();i++){
            if (dnastr.charAt(i) == 'A' || dnastr.charAt(i) == 'a')
            compl+='T';
            else if (dnastr.charAt(i) == 'T' || dnastr.charAt(i) == 't')
                compl+='A';
            else if (dnastr.charAt(i) == 'G' || dnastr.charAt(i) == 'G')
                compl+='C';
            else if (dnastr.charAt(i) == 'C' || dnastr.charAt(i) == 'c')
                compl+='G';
            else{
                System.out.println("Invalid Dna string");
                break;
            }
        }

        System.out.println(compl);

        scanner.close();
    }
}
