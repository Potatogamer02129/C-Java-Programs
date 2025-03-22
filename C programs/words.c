#include <stdio.h>
void main()
{
    int i,n,r=0;
    printf("Input some monie :");
    scanf("%d",&n);
    while(n!=0)
    {
        r= r*10 + (n%10);
        n=n/10;
    }
    printf("The reversed number is %d\n",r);
}