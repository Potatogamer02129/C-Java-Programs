#include <stdio.h>
int main()
{
    int a;
    printf("time in hour only: ");
    scanf("%d24",&a);
    if (a>=0 && a<12) 
    {
        printf("good morning\n");
    }
    else if (a>=12 && a<17)
    {
        printf("good afternoon\n");
    }
    else if (a>=17 && a<19)
    {
        printf("good evening\n");
    }
    
    else{
        printf("good night\n");
    }
    return 0;
}