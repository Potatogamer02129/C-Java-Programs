#include <stdio.h>

int arraysum(int arr[],int size);

int main()
{
	int arr[10];
	int i,size;
        size=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<=size;i++)
	{
		printf("%d==>Enter a number: ",i);
		scanf("%d",&arr[i]);
	}
	printf("The sum of all the numbers entered int the array is %d\n",arraysum(arr,size));
	return 0;
}

int arraysum(int arr[],int size){
	int sum=0,i;
	for(i=0;i<=size;i++)
	{
		sum+=arr[i];
	}
	return sum;
}

