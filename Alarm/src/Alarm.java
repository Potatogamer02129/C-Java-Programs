import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.time.format.DateTimeParseException;
import java.util.Date;
import java.util.Scanner;

public class Alarm {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("HH:mm:ss");
        LocalTime alarmTime = null;

        while(alarmTime == null){
            try{
                System.out.print("Enter an alarm time (HH:mm:ss): ");
                String inputTime = scanner.nextLine();
                alarmTime = LocalTime.parse(inputTime , formatter);
                System.out.println("Alarm set for " + alarmTime);
            }
            catch(DateTimeParseException e){
                System.out.println("Input a correct format of the time");
            }

        }

        AlarmClock alarmClock = new AlarmClock(alarmTime);
        Thread alarmThread = new Thread(alarmClock);
        alarmThread.start();
        scanner.close();

    }
}