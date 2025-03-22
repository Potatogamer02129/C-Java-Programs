#include <stdio.h>
void main()
{
    int i,n,r;
    r=0;
    printf("Input a number: ");
    scanf(" %d", &n);
    for(i=0 ; i<=n ; i++)
    {
        printf("%d ",i);
        r=r+i;
    }
    printf("\n%d\n",r);
}
