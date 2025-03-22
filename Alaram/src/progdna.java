import java.util.Scanner;

public class progdna {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a DNA string: ");
        String DNA = scanner.nextLine();
        int i;
        int a = 0, g = 0, c = 0, t = 0;
        String N;
        for(i = 0 ; i < DNA.length() ; i++){
            N = String.valueOf(DNA.toUpperCase().charAt(i));
            switch(N){
                case "A" -> a++;
                case "G" -> g++;
                case "C" -> c++;
                case  "T" -> t++;
            }
        }
        System.out.println(a);
        System.out.println(g);
        scanner.close();
    }

}
// write a program to inout a dna string and print the count of A , T ,G and C separately