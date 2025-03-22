#include <stdio.h>
void main()
{
	int arr[10]={4,2,65,45,34,24,545,6564,645,54};
	int i,j=arr[0],k=arr[0];
	for(i=1;i<10;i++) //iterates through all the array elements
	{
		if(arr[i]>j) //checks if j is greater than the current array el
		{
			j=arr[i]; //assigns j new value if a greater array element is found
		}
		if(arr[i]<k)
		{
			k=arr[i];
		}
             
}
                printf("The largest element in the array is %d\n",j);  //prints the largest value assigned
		printf("The smallest element in the array is %d\n",k);						       
}
