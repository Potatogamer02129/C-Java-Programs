import javax.sound.sampled.*;
import java.io.File;
import java.io.IOException;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.time.format.DateTimeParseException;
import java.util.Scanner;
import java.util.Timer;
import java.util.TimerTask;

public class TimeLeft {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);


        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("HH:mm:ss");
        LocalTime alarmTime = null;

        while (alarmTime == null) {
            try {
                System.out.print("Enter an alarm time (HH:mm:ss): ");
                String inputTime = scanner.nextLine();
                alarmTime = LocalTime.parse(inputTime, formatter);
                System.out.print("Seconds remaning: ");
            } catch (DateTimeParseException e) {
                System.out.println("Input a correct format of the time");
            }
            int alarm = alarmTime.getHour() * 3600 + alarmTime.getMinute() * 60 + alarmTime.getSecond();
            int currtime = LocalTime.now().getHour() * 3600 + LocalTime.now().getMinute() * 60 + LocalTime.now().getSecond();

            int toGo = alarm - currtime;
            if (toGo < 0) {
                toGo += 24 * 3600; // Add 24 hours if the alarm time is for the next day
            }

            for(int i = toGo ; i >= 0 ; i--){
                System.out.print(i); // Print the current number
                try {
                    Thread.sleep(1000); // Wait for 1 second
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
                // Erase the previous number by printing backspaces
                for (int j = 0; j < String.valueOf(i).length(); j++) {
                    System.out.print("\b");
                }
            }
            System.out.println("\nPress enter to exit: ");
            playAudio("src\\song2.wav");
            try{
                System.in.read();
            }
            catch(IOException e){
                System.out.println("Got a input output error ;)");
            }

            scanner.close();
        }

    }

    public static void playAudio(String filePath) {
        try {
            File audioFile = new File(filePath);
            AudioInputStream audioStream = AudioSystem.getAudioInputStream(audioFile);
            Clip clip = AudioSystem.getClip();
            clip.open(audioStream);
            clip.start();
        } catch (UnsupportedAudioFileException | IOException | LineUnavailableException e) {
            e.printStackTrace();
        }
    }
}

