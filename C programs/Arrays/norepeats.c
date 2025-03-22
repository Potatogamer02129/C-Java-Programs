#include <stdio.h>
int main(){
	int a[25]={1,2,4,3,5,6,5,7,4,2,4,2,4,2,1,3,4,2,4,5,5,6,1,1,2};
	int b[25];
	int i,j,k=0,repeat,r;
	for(i=0;i<25;i++)
	{
		repeat=0;
		for(r=i;r>=0;r--)
		{
			if(a[i]==a[r-1]){
				repeat=1;
			}
		}
		if(repeat){
                  continue;  
		}
		else{
			b[k]=a[i];
			k++;	
		}
	}
	for(i=0;i<k;i++)
	{
		printf(" %d",b[i]);
	}
}
