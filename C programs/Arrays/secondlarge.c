#include <stdio.h>
int main()
{
	int arr[10]={34,43,45,32,56,7,65,43,234,54};
	int i,j,k=arr[0],n=arr[0];
	for(i=1;i<=9;i++)
	{
		if(arr[i]>k){
                 k=arr[i];
		}
	}
	for(j=1;j<=9;j++)
	{
		if(arr[j]==k)
		{
			arr[j]=0;
		}
	}	
	for(i=1;i<=9;i++)

	{
		if(arr[i]>n){
                 n=arr[i];
		}
	}
	printf("The second largest number in this dataset is %d\n",n);
}
