#include <stdio.h>
void main()
{
	int i,x=0,y=1,n;
	printf("Enter the number of number in the sequence :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
          printf("%d ",x);
          printf("%d ",y);
	  x=x+y;
	  y=x+y;
	}
	printf("\n");
}

