#include <stdio.h>
void main()
{
	int i,j,k,n;
	printf("Enter a Number: ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
          if(n%i==0)
	  {
		  break;
	  }
	}
	if(i==n)
	{
		printf("Prime number\n");
	}
	else if(i!=n)
	{
		printf("Not a prime number\n");
	}
}	
