#include <stdio.h>
void main()
{
    int i,e=0,o=0;
    for (i=0;i<=100;i+=2)
    {
        e=e+i;
    }
    for (i=1;i<=100;i+=2)
    {
        o=o+i;
    }
    printf("Addition of all the even number between 0 to 100 is: %d\n",e);
    printf("Addition of all the odd number between 0 to 100 is: %d\n",o);
}