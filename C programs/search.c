#include <stdio.h>
void main()
{
	int arr[10]={0,11,22,33,44,55,66,77,88,99};
	int n,i,j,k;
	printf("Enter your Query number :");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(n==arr[i])
		{
			break;
		}
	}
	if(i<=9)
	{
		printf("The number is present in dataset at %d position\n",i);
	}
	else
	{
		printf("The number is not present in the data set\n");
	}
}
