#include <stdio.h>
void main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int start,end;
	printf("Enter the start number: ");
	scanf("%d",&start);
        printf("Enter the end number: ");
	scanf("%d",&end);
	while(start<=end)
	{
		printf("%d\n",arr[start]);
		start++;
	}

}
