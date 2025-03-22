#include <stdio.h>
int main()
{
	int arr[10]={65,43,24,439,45,12,334,32,564,532};
	int arrd[10]={65,43,24,439,45,12,334,32,564,532};
	int i=0,j,k=arr[0],n;
	int arrc[10],arrs[10];
	for(j=0;j<=9;j++)
	{
//	for(i=0;i<=9;i++)
        while(i<=9)
	{
           if(arr[i]<k)
	   {
		  k = arr[i];
	   }
       /* for(n=0;n<=9;n++)
	{
		if(k==arr[n])
		{
			break;
		}
	}	*/

		i++	
}

	arrc[j]=k;	
}
printf("%d ",arrc[0]);
printf("%d ",arrc[1]);
printf("%d ",arrc[2]);
printf("%d ",arrc[3]);
printf("%d",arrc[4]);
}
