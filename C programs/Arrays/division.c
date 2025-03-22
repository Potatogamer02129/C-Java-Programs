#include <stdio.h>
void main()
{
    int panchso=0,doso=0,so=0,pachas=0,bees=0,das=0,panch=0,doo=0,ek=0,n;
    printf("Enter Amount :");
    scanf("%d",&n);
    while(n!=0)
    {
        if(n>=500)
        {
            panchso=n/500;
            n=n-500*panchso;
        }
        else if(n>=200)
        {
            doso=n/200;
            n=n-200*doso;
        }
        else if(n>=100)
        {
            so=n/100;
            n=n-100*so;
        }
        else if(n>=50)
        {
            pachas=n/50;
            n=n-50*pachas;
        }
        else if(n>=20)
        {
            bees=n/20;
            n=n-bees*20;
        }
        else if(n>=10)
        {
            das=n/10;
            n=n-das*10;
        }
        else if(n>=5)
        {
            panch=n/5;
            n=n-panch*5;
        }
        else if(n>=2)
        {
            doo=n/2;
            n=n-doo*2;
        }
        else if(n>=1)
        {
            ek=n/1;
            n=n-ek;
        }
        else
        {
        
        }
    }
    printf("The notes required to get this amount is :-\n");
    printf("500 ==> %d\n",panchso);
    printf("200 ==> %d\n",doso);
    printf("100 ==> %d\n",so);
    printf("50  ==> %d\n",pachas);
    printf("20  ==> %d\n",bees);
    printf("10  ==> %d\n",das);
    printf("5   ==> %d\n",panch);
    printf("2   ==> %d\n",doo);
    printf("1   ==> %d\n",ek);
}
