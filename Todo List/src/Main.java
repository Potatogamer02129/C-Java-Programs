import java.io.*;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    static final String FILE_NAME = "task.txt";
    static ArrayList<String> task = new ArrayList<>();
    public static void main(String[] args) {
        loadTasks();
        Scanner scanner = new Scanner(System.in);
        int menu = 0;
        String toDo = "";
        while (true){
            System.out.println("ToDo List");

            System.out.println("1. Show Task");
            System.out.println("2. Add Task");
            System.out.println("3. Remove Task");
            System.out.println("4. Quit");
            System.out.print("Choose Any Option: ");
            menu = scanner.nextInt();
            scanner.nextLine();
            if(menu == 4) break;
            else if(menu == 1) showTask();
            else if(menu == 2) {
                System.out.print("Task to be added: ");
                toDo = scanner.nextLine();
                addTask(toDo);
            }
            else if(menu == 3){
                System.out.print("Index of the task to be removed: ");
                int i = scanner.nextInt();
                removeTask(i);
            }
        }
        saveTasks();
        scanner.close();
    }

public static void showTask(){
        int i;
    System.out.println("---------------------------------------------");
        for(i=0;i<task.size();i++){
            System.out.println(i + ". " + task.get(i));
        }
    System.out.println("---------------------------------------------");
        System.out.print("Press enter to go to menu");
        try{
            System.in.read();
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
}

public static void addTask(String toDo){
        task.add(toDo);
}

public static void removeTask(int i){
        task.remove(i);
}

    static void loadTasks() {
        try (BufferedReader br = new BufferedReader(new FileReader(FILE_NAME))) {
            String line;
            while ((line = br.readLine()) != null) {
                task.add(line);
            }
        } catch (IOException e) {
            System.out.println("No existing task file found. Creating a new one...");
        }
    }

    static void saveTasks() {
        try (BufferedWriter bw = new BufferedWriter(new FileWriter(FILE_NAME))) {
            for (String task : task) {
                bw.write(task);
                bw.newLine();
            }
        } catch (IOException e) {
            System.out.println("Error saving tasks.");
        }
    }

}