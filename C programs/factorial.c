#include <stdio.h>
void main()
{
    int i,n,fac=1;
    printf("Enter a number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fac*=i;
    }
    printf("The factorial of the given number is %d",fac);
}