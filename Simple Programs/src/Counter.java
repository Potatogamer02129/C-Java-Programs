public class Counter {
    public static void main(String[] args) {
        for(int i =1 ; i<=10 ; i++){
            try{
                Thread.sleep(1000);
            }
            catch(InterruptedException e){
                System.out.println("Error");
            }
            System.out.printf("\r%d",i);
        }

    }
}