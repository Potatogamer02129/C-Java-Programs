
import java.util.Scanner;

public class Q_21 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        float A=0,G=0,T=0,C=0;
        float Tm=0;
        int flg;
        System.out.print("ENTER a DNA Sequence: ");
        String DNA = scanner.nextLine();
        if(DNA.length()>13) flg=1;
        else flg=0;
        char ch;
        for(int i=0;i<DNA.length();i++)
        {
            ch = DNA.charAt(i);
            switch(ch){
                case 'A' -> A++;
                case 'G' -> G++;
                case 'C' -> C++;
                case 'T' -> T++;
            }
        }
        if(flg==1) Tm = (float) (64.9 +41*(G+C-16.4)/ (A+T+G+C));
        else Tm= (A+T) * 2 + (G+C) * 4;
        System.out.println("The Melting Temp of the given sequence is going to be " + Tm);
        scanner.close();
    }
}
