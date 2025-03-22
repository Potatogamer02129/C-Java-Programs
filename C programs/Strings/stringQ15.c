#include <stdio.h>
void main()
{
	char str[50],srch[10],i,j,k=0,n,flg=0;
	printf("Enter a string: ");
	scanf("%s",str);
	printf("Enter the string to be searched: ");
	scanf("%s",srch);
	for(i=0;str[i]!='\0';i++)
	{
		for(j=0;j<=i;j++)
		{
			if(srch[k]=='\0')
			{
				flg=1;
				break;
			}
			if(srch[k]!=str[j])
			{
				k=0;
				continue;
			}
			else if(srch[k]==str[j])
			{
				k++;
			}
		}
		if(flg)
		{
			printf("Found!");
			break;
		}
	}
	if(!flg)
	{
		printf("Not found");
	}
}
