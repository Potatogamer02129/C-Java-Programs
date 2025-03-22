import java.lang.reflect.Array;

public class Money {
    private int value;
    private int m500=0;
    private int m200=0;
    private int m100=0;
    private int m50=0;
    private int m20=0;
    private int m10=0;
    private int m5=0;
    private int m2=0;
    private int m1=0;
    public Money(int n){
        value=n;
    }
    public void setValue(int n){
        value=n;
    }
    public void removeValue(int n){
        value=value-n;
    }
    public void addValue(int n){
        value=value+n;
    }
    public int getValue(){
        return value;
    }
    public void showMoney(){
        int tmp = value;
        if(tmp>500)
        {
            m500=tmp/500;
            tmp=tmp%500;
        }
        if(tmp>200)
        {
            m200=tmp/200;
            tmp=tmp%200;
        }
        if(tmp>100)
        {
            m100=tmp/100;
            tmp=tmp%100;
        }
        if(tmp>50)
        {
            m50=tmp/50;
            tmp=tmp%50;
        }
        if(tmp>20)
        {
            m20=tmp/20;
            tmp=tmp%20;
        }
        if(tmp>10)
        {
            m10=tmp/10;
            tmp=tmp%10;
        }
        if(tmp>5)
        {
            m5=tmp/5;
            tmp=tmp%5;
        }
        if(tmp>2)
        {
            m2=tmp/2;
            tmp=tmp%2;
        }
        if(tmp>1)
        {
            m1=tmp;
            tmp=tmp%1;
        }
        System.out.printf("500 : %d\n200 : %d\n100: %d\n50 : %d\n20 : %d\n10 : %d\n5 : %d\n2 : %d\n1 : %d\n",m500,m200,m100,m50,m20,m10,m5,m2,m1);
    }
}
