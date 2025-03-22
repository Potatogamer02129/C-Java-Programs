import java.io.IOException;
import java.util.Random;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();
        int gun;
        boolean isAlive = true;
        char replay;
        int bullet = random.nextInt(7);
        System.out.println("------------------------------------------------------------------------");
        System.out.println("            .-.____________________.-.\n" +
                "     ___ _.' .-----.    _____________|\n" +
                "    /_._/   (      |   /_____________|\n" +
                "      /      `  _ ____/     _____  _   _  __ \n" +
                "     |_      .\\( \\\\        |_   _|| |_| || _|\n" +
                "    .'  `-._/__`_//          | |  |  _  || _|                    __\n" +
                "  .'       |\"\"\"\"'            |_|  |_| |_||__|                   (  )\n" +
                " /        / _   _ _  _ _____ ___ _   _ ___ _   _ ___ ___ _   ___ |/___\n" +
                "/        | | | | | \\| |_   _|   | | | |  _| |_| |   |   | | |  _| |  _|\n" +
                "|        ' | |_| |    | | | | I | |_| | |_|  _  | ' |  <| |_|  _| |_  |\n" +
                "|         \\|_____|_|\\_| |_| |___|_____|___|_| |_|_|_|___|___|___| |___|\n" +
                "`-._____.-'\n");
        System.out.println("------------------------------------------------------------------------");
        System.out.println("WELCOME TO RUSSIAN ROULETTE!!!");
        while(true){
        System.out.print("PLAY or no? (Y/N) : ");
        replay = scanner.next().charAt(0);
        if(replay == 'N' || replay == 'n'){
            break;
        }
        System.out.println("\nRoll the revolver(press any key):");
        System.in.read();
        System.in.skip(System.in.available());
        System.out.println("Cock the GUN(Press any key): ");
        System.in.read();
        System.in.skip(System.in.available());
        System.out.println("-----------SHOOT-------------");
        System.in.read();
        System.in.skip(System.in.available());
        gun = random.nextInt(7);
        if(gun == bullet){
            System.out.println("------------------------------------------------------------------------");
            System.out.println("                                                \n" +
                    "88                                              \n" +
                    "88                                              \n" +
                    "88                                              \n" +
                    "88,dPPYba,  ,adPPYYba, 8b,dPPYba,   ,adPPYb,d8  \n" +
                    "88P'    \"8a \"\"     `Y8 88P'   `\"8a a8\"    `Y88  \n" +
                    "88       d8 ,adPPPPP88 88       88 8b       88  \n" +
                    "88b,   ,a8\" 88,    ,88 88       88 \"8a,   ,d88  \n" +
                    "8Y\"Ybbd8\"'  `\"8bbdP\"Y8 88       88  `\"YbbdP\"Y8  \n" +
                    "                                    aa,    ,88  \n" +
                    "                                     \"Y8bbdP\"   \n");
            System.out.println("------------------------------------------------------------------------");
            isAlive = false;
            break;
        }
        System.out.println("***CLICK***\nYou are safe (for now😜)\n");
        System.out.println("------------------------------------------------------------------------");
        }
        if(isAlive){
            System.out.println("------------------------------------------------------------------------");
            System.out.print("   -=-\n" +
                    "(\\  _  /)\n" +
                    "( \\( )/ )\n" +
                    "(       )\n" +
                    " `>   <'\n" +
                    " /     \\  \n" +
                    " `-._.-'");
            System.out.println("------------------------------------------------------------------------");
            System.out.println("Thanks for playing");
            System.out.println("YOU MADE OUT SAFE(FOR NOW😊)");
            System.out.println("------------------------------------------------------------------------");
        }
        else{
            System.out.println("------------------------------------------------------------------------");
            System.out.print("              ...\n" +
                    "             ;::::;\n" +
                    "           ;::::; :;\n" +
                    "         ;:::::'   :;\n" +
                    "        ;:::::;     ;.\n" +
                    "       ,:::::'       ;           OOO\\\n" +
                    "       ::::::;       ;          OOOOO\\\n" +
                    "       ;:::::;       ;         OOOOOOOO\n" +
                    "      ,;::::::;     ;'         / OOOOOOO\n" +
                    "    ;:::::::::`. ,,,;.        /  / DOOOOOO\n" +
                    "  .';:::::::::::::::::;,     /  /     DOOOO\n" +
                    " ,::::::;::::::;;;;::::;,   /  /        DOOO\n" +
                    ";`::::::`'::::::;;;::::: ,#/  /          DOOO\n" +
                    ":`:::::::`;::::::;;::: ;::#  /            DOOO\n" +
                    "::`:::::::`;:::::::: ;::::# /              DOO\n" +
                    "`:`:::::::`;:::::: ;::::::#/               DOO\n" +
                    " :::`:::::::`;; ;:::::::::##                OO\n" +
                    " ::::`:::::::`;::::::::;:::#                OO\n" +
                    " `:::::`::::::::::::;'`:;::#                O\n" +
                    "  `:::::`::::::::;' /  / `:#\n" +
                    "   ::::::`:::::;'  /  /   `#\n");
            System.out.println("------------------------------------------------------------------------");
            System.out.println("DED");
            System.out.println("------------------------------------------------------------------------");
        }
        scanner.close();
    }
}