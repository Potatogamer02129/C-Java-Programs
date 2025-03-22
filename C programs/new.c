#include <stdio.h>
void main()
{
	int i,j,k;
	int a[10]={56,56,34,45,34,24,54,34,43,74};
	int b[10];
	for(i=0;i<10;i++)   //copy the array into a new array
	{
		b[i]=a[i];
	}
	for(i=0,j=9;i<10,j>=0;i++,j--)  //reversal
	{
		a[i]=b[j];
	}
	printf("%d",a[1]);
}
