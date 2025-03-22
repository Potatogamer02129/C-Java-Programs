#include <stdio.h>
void main()
{
    int i,j,n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>1 && j<n && i>1 && i<n)
            {
                printf(" ");
            }
           /* else if(i>1 && i<n)
            {
                printf(" ");
            }  */
            else{
                  printf("*");
            }
            
        }
        printf("\n");
    }
}