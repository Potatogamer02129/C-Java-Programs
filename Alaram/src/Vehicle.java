public class Vehicle {
    private String make;
    private int year;
    public Vehicle(String make,int year){
        System.out.println("super class constructor is called");
        this.make=make;
        this.year=year;
    }
    public void displayInfo(){
        System.out.println("The car's Model is "+make);
        System.out.println("The cars manufacturing year is "+year);
    }
}
