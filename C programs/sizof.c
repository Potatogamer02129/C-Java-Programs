#include <stdio.h>
int main()
{
	int arr[10]={43,23,4565,4,3434,323243,445,555565};
	int arr1[10]={32,323,43,3232,343,2323,433,32,334,23};
	int size=sizeof(arr)/sizeof(arr[0]);
	int size1=sizeof(arr1)/sizeof(arr[0]);

	printf("The size of Array 1 is %d\n",size);
	printf("The size of Array 2 is %d\n",size1);
}
