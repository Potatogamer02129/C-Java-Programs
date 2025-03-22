//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
import javax.sound.sampled.*;
import java.io.File;
import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // List of gun sound files (modify with your actual file paths)
        String[] gunSounds = {"cock.wav", "click.wav", "gunshot.wav"};

        Scanner scanner = new Scanner(System.in);
        Clip clip = null;

        while (true) {
            // Show options
            System.out.println("\nChoose a sound to play:");
            for (int i = 0; i < gunSounds.length; i++) {
                System.out.println((i + 1) + ". " + gunSounds[i]);
            }
            System.out.println("0. Exit");
            System.out.print("Enter choice: ");

            int choice = scanner.nextInt();

            if (choice == 0) {
                System.out.println("Exiting...");
                break;
            }

            if (choice < 1 || choice > gunSounds.length) {
                System.out.println("Invalid choice. Try again.");
                continue;
            }

            // Stop the previous sound if playing
            if (clip != null && clip.isRunning()) {
                clip.stop();
                clip.close();
            }

            // Play the selected sound
            String selectedFile = gunSounds[choice - 1];
            clip = playSound(selectedFile);
        }

        // Cleanup
        if (clip != null) {
            clip.close();
        }
        scanner.close();
    }

    private static Clip playSound(String filePath) {
        try {
            File file = new File(filePath);
            AudioInputStream audioStream = AudioSystem.getAudioInputStream(file);
            Clip clip = AudioSystem.getClip();
            clip.open(audioStream);
            clip.start();
            return clip;
        } catch (UnsupportedAudioFileException | IOException | LineUnavailableException e) {
            System.out.println("Error playing sound: " + e.getMessage());
            return null;
        }
    }
}

