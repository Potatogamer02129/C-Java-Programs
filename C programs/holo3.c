#include <stdio.h>
void main()
{
    int i,j,k,l,n=3;
    for(i=1;i<5;i++)
    {
        for(k=1;k<=5-1;k++)
        {
            printf(" ");
        }
        if(i==1)
        {
            printf(" *");
        }
        else(i>1)
        {
            printf(" *");
            for(l=1;l<=3-n;l++,n--)
            {
                printf("  ");
            }
            printf(" *");
        }
    }
    printf("\n");
}