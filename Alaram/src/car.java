public class car extends Vehicle{
    private int numDoors;

    public car(String make, int year, int numDoors) {
        super(make, year);
        this.numDoors=numDoors;
        System.out.println("Sub class constructor is Called");
    }
    public void displayinfo(){
        super.displayInfo();
        System.out.println("This car has "+numDoors+" Doors");
    }
}
