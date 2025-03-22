#include <stdio.h>
int main()
{
	int i,j,k,repeat,r;
	char a[100];
	printf("Enter a string :");
	scanf("%99[^\n]",a);
	for(i=0;a[i]!='\0';i++)
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
		for(j=0;a[j]!='\0';j++)
		{
                  if(a[i]==a[j])
		  {
                    repeat++;
		  }
		}
		if(repeat>0)
		{
			printf("The base %c has repeatation of %d\n",a[i],repeat);
		}
	}
}
