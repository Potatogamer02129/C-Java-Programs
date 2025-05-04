public class Vehicle {
    String Vehiclename;
    int wheels;
    public Vehicle(){
        Vehiclename=null;
        wheels=0;
    }
    public Vehicle(String vname,int tyre){
        this.Vehiclename=vname;
        this.wheels=tyre;
    }

    public void move(){
        System.out.println("The vehicle is moving....");
    }
}
