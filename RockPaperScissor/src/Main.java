import java.util.Scanner;
import java.util.Random;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);   // Creates a scanner classes instance or object
        Random random = new Random();               // Creates a random classes instance or object

        int H_score=0,R_score=0;  // Tracks the score
        int rand_num,h_num;              // To take the random number from the computer
        while( H_score < 5 && R_score < 5 ){    // game ends one someone reaches score 10
        rand_num = random.nextInt(1,4);
        System.out.printf("1. Stone\n2. Paper\n3. Scissor\n");
        System.out.print("Enter your play (1,2,3) : ");
        h_num = scanner.nextInt();
        if(rand_num == 1){
            System.out.println("The robot chose Stone");
        }
        else if(rand_num == 2){
            System.out.println("The robot chose Paper");
        }
        else if(rand_num == 3){
            System.out.println("The robot chose Scissor");
        }
        if(rand_num == h_num){
            System.out.println("Tie");
        }
        else if(rand_num==1 && h_num==2){
            System.out.println("The human wins!");
            H_score++;
        } else if (rand_num==1 && h_num==3) {
            System.out.println("The robot wins!");
            R_score++;
        } else if (rand_num==2 && h_num==1) {
            System.out.println("The robot wins!");
            R_score++;
        } else if (rand_num==2 && h_num==3) {
            System.out.println("The human wins!");
            H_score++;
        } else if (rand_num==3 && h_num==1) {
            System.out.println("The human wins!");
            H_score++;
        } else if (rand_num==3 && h_num==2) {
            System.out.println("The robot wins!");
            R_score++;
        }
        System.out.printf("The scores are as follows :\nHuman: %d\nRobot: %d\n",H_score,R_score);
        System.out.println("----------------------------------------------------------------------------------------");
        }
        if(H_score==5){
            System.out.println("**********************  |");
            System.out.println("**The H00MAN wins!!!**  |");
            System.out.println("**********************  |");
            System.out.println("----------------------------------------------------------------------------------------");
            System.out.println("YOU SAVED HUMANITY!!! :)");
        } else if (R_score==5) {
            System.out.println("**********************  |");
            System.out.println("***The ROBO wins!!!***  |");
            System.out.println("**********************  |");
            System.out.println("----------------------------------------------------------------------------------------");
            System.out.println("WELL AI took over. THANKS BUDDY (;-;)");
        }
        scanner.close();
    }
}