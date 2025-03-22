#include <stdio.h>
void main(){
	int i,sumeven=0,sumodd=0,arr[10];
        for(i=0;i<10;i++)
	{
		printf("Enter the data element no. %d : ",i);
                scanf("%d",&arr[i]); 
	}
	for(i=0;i<10;i++)
	{
		if(arr[i]%2==0){
			sumeven+=arr[i];
		}
		else{
			sumodd+=arr[i];
		}
	}
	printf("The sum of all odd numbers in the array is %d\n",sumodd);
	printf("The sum of all even numbers in the array is %d\n",sumeven);
}
