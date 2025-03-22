#include <stdio.h>
void main()
{
	int arr[15],arr2[15],i,k=0,j=0,cutoff,temp;
	printf("Enter a cutoff number: ");
	scanf("%d",&cutoff);
	for(i=0;i<15;i++)
	{
		printf("Enter a data element for array :");
		scanf("%d",&temp);
		if(temp>cutoff)
		{
			arr[k]=temp;
			k++;
		}
		else{
			arr2[j]=temp;
			j++;
		}
	}
}
