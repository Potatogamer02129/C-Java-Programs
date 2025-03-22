#include <stdio.h>
void main()
{
int i,r;
for(i=1;i<=10;i++)
{
r=i*i;
if(r>50)
{
    break;
}
printf("%d's square is smaller than 50\n",i);
r=1;
}
printf("the number whose square is greater than 50 starts from %d\n",i);
}