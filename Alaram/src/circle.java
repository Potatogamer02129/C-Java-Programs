public class circle {
    // write a java class named circle write getter setter to return the area and cicumference
    // where pie is 22/7 or 3.14
    // define a default and overloaded constructor
    private double pie = 3.14;
    private double radius;
    public circle(double radi){
        radius=radi;
    }
    public circle(){
        radius=1;
    }
    double getArea(){
        return pie * radius * radius;
    }
    double getPermimeter(){
        return 2 * pie * radius;
    }
}
