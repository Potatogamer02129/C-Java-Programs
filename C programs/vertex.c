#include <stdio.h>
void main()
{
    int i, j, k=97;
    for(i=1 ; i<=5 ; i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i==4 && j>=3)
            {
                continue;
            }
            else if(i==5 && j>=2)
            {
                continue;
            }
            else{
                printf("%c",k++);
            }
        }
        printf("\n");
    }
}