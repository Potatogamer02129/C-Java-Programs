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
    do{
        i=r%10;
        switch(i){
            case 1:
            printf("ONE ");
            break;
            case 2:
            printf("TWO ");
            break;
            case 3:
            printf("THREE ");
            break;
            case 4:
            printf("FOUR ");
            break;
            case 5:
            printf("FIVE ");
            break;
            case 6:
            printf("SIX ");
            break;
            case 7:
            printf("SEVEN ");
            break;
            case 8:
            printf("EIGHT ");
            break;
            case 9:
            printf("NINE ");
            break;
            case 0:
            printf("ZERO ");
            break;
        }
        r=r/10;
    }while(r!=0);
    printf("\n");
}
