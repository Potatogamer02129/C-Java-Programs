public class Car extends Vehicle{
    String Brand;
    public Car(){
        super();
        Brand=null;
    }
    public static void hello(){
        System.out.println("Hello World");
    }
    public Car(String vname,int tyre,String Brand){
        super(vname,tyre);
        this.Brand=Brand;
    }
    public void ShowCar(){
        System.out.println("Vehiclename "+Vehiclename);
        System.out.println("No. of Wheels :"+wheels);
        System.out.println("Brand: "+Brand);
    }
    @Override
    public void move(){
        System.out.println("The car is moving....");
    }
}
