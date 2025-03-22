#include <stdio.h>
#define size 5
void main()
{
	int a[size]={1,2,3,4,5};
	int b[7]={6,7,8,9,10,11,12};
	int i,c[12];
	for(i=0;i<12;i++){
		if(i<=size-1)
		{
			c[i]=a[i];
		}
		else{
			c[i]=b[i-size];
		}
	}
	for(i=0;i<12;i++)
	{
		printf(" %d",c[i]);
	}
}
