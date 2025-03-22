import java.util.Scanner;
// write a program to create a 2D array of strings containing the name and surnames input a surname and input all the names from that surname
// write a program to input a string of all the triplets in the DNA string
// write  java program to input an integer array of 5 rows 5 column and print all the rows that contain atleast 1 value above 10
public class countWord {
    public static void main(String[] args){
            Scanner scanner = new Scanner(System.in);
            int arr[][] = new int[5][5];
            int i,j;
            for(i=0;i<5;i++){
                for(j=0;j<5;j++){
                    arr[i][j]= scanner.nextInt();
                }
            }
            int flg;
            for(i=0;i<5;i++){
                flg=0;
                for(j=0;j<5;j++){
                    if(arr[i][j]>10){
                        flg=1;
                    }
                }
                if(flg==1){
                    for(j=0;j<5;j++){
                        System.out.print(arr[i][j]+" ");
                        }
                    }
                System.out.println();
                }

            scanner.close();
    }
}
