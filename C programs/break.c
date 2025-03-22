#include <stdio.h>
void main()
{
int i,n,s;

for (i=1,s=1;i<=10;i++)
{
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n%2==0)
	{ 
	printf("\n%d-->",i);
	continue;
	}
	else
	{
	s += n;
	}
}
printf("The sum of odd numbers %d\n",s);

}
