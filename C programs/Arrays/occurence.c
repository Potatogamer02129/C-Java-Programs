#include <stdio.h>
int main()
{
	int i,j,k,repeat,r;
	int a[20]={1,2,5,4,7,5,4,2,1,6,5,4,5,4,5,2,1,4,5,5};
	for(i=0;i<20;i++)
	{
		r=0;
		for(k=i;k>=0;k--)
		{
			if(a[i]==a[k-1]){
				r=1;
			}
		}
		if(r==1){
			continue;
		}
		repeat=0;
		for(j=0;j<20;j++)
		{
                  if(a[i]==a[j])
		  {
                    repeat++;
		  }
		}
		if(repeat>0)
		{
			printf("array no. %d Containing the value %d has repeatation of %d\n",i,a[i],repeat);
		}
	}
}
