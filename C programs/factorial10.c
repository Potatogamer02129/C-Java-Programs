#include <stdio.h>
void main()
{
    int i,j,fac=1;
    for(j=1;j<=10;j++)
    {
    for(i=1;i<=j;i++)
    {
        fac=fac*i;
    }
    printf("The factorial of %d is %d\n",i-1,fac);
    fac=1;
    }
}
