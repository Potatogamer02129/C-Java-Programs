public class ElectricCar extends Vehicle{
    private int numDoors;
    private Double batteryCapacity;
    public ElectricCar(String make,int year,int numDoors,Double batteryCapacity){
        super(make, year);
        this.batteryCapacity=batteryCapacity;
        this.numDoors=numDoors;
        System.out.println("Sub class constructor is Called");
    }
    public void displayInfo(){
        super.displayInfo();
        System.out.printf("This car has %d Doors",numDoors);
        System.out.printf("This car's Battery Capacity is %d KWh",batteryCapacity);
    }
}
