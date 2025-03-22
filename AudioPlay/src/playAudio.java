import javax.sound.sampled.*;
import java.io.File;
import java.io.IOException;
import java.util.Scanner;

class playAudio {
    public static void main(String[] args) throws UnsupportedAudioFileException, LineUnavailableException, IOException {
        Scanner scanner = new Scanner(System.in);
        String name = "src\\song.wav";
        char toPlay = 'p';
        while(toPlay != 'q' || toPlay != 'n'){
            System.out.println("Which song do you want to play: ");
            System.out.println("1. Tose naina");
            System.out.println("2. Something else");
            System.out.println("MUSIC Player");
            int i = scanner.nextInt();
            if(i == 1) {
                name = "src\\song.wav";
            }
            Playsound(name);
            toPlay = scanner.next().toLowerCase().charAt(0);
        }
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



