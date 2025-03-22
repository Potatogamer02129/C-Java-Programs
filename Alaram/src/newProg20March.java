import java.util.Scanner;

public class newProg20March {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        double r;
        System.out.print("Enter a radius to be entered: ");
        r = scanner.nextDouble();
        circle gola = new circle(r);
        System.out.println(gola.getArea());
        System.out.println(gola.getPermimeter());
        circle gola2 = new circle();
        System.out.println(gola2.getArea());
        System.out.println(gola2.getPermimeter());

        scanner.close();
    }
}
// create a class money with data members as notes