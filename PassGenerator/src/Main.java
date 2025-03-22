import java.util.Random;

public class Main {
    public static void main(String[] args) {
        Random random = new Random();
        int len = random.nextInt(8,17);
        int i;
        String FinalPassword;
        StringBuilder password = new StringBuilder();
        for(i=0;i<len;i++){
            char randchar = (char)random.nextInt(33,127);
            password.append(randchar);
        }
        FinalPassword = password.toString();
        System.out.println("Your Randomly password is" + FinalPassword + " of lenght " + len);
    }
}