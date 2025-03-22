import javax.sound.sampled.*;
import java.io.File;
import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws UnsupportedAudioFileException, LineUnavailableException, IOException {
        System.out.println("PLAYING Tose Naina😊..........");
        String name = "song.wav";
        Playsound(name);


    }

    private static void Playsound(String path) throws LineUnavailableException, UnsupportedAudioFileException, IOException {
        File file = new File(path);
        AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
        Scanner scanner = new Scanner(System.in);
        Clip clip = AudioSystem.getClip();
        clip.open(audioStream);
        clip.start();

        // Keep the program running until the user presses Enter
        System.out.println("Press Enter to stop...");
        scanner.nextLine();

        // Stop and close resources
        clip.stop();
        clip.close();
        scanner.close();
    }
}



