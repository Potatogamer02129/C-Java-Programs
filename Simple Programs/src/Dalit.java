import java.io.File;
import java.util.Scanner;

public class Dalit {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        while(true){
            System.out.printf("Enter a Path of the file to be deleted: ");
            String Path = scanner.next();
            File file = new File(Path);
            if(file.exists()) {
                file.delete();
                break;
            }
            System.out.println("The mentioned file or Directory doesn't Exist please try again...");
        }
        scanner.close();
    }
}
