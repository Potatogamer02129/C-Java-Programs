public class mainMethod {
    public static void main(String[] args){
        car car1 = new car("Ford Mustang",1997,2);
        ElectricCar car = new ElectricCar("Tesla Model S",2022,4,24.50);
        car1.displayinfo();
        car.displayInfo();
    }
}
