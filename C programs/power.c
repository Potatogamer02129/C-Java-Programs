#include <stdio.h>
void main()
{
    int n,p,r=1,i;
    printf("Enter a number :");
    scanf("%d",&n);
    printf("Enter its power :");
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    {
       r=r*n;
    }
    printf("The result of the number %d with power %d is %d\n",n,p,r);
}