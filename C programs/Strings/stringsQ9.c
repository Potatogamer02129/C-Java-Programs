#include <stdio.h>
void main()
{
	char DNA[100];
	int i,flg=0;
	printf("Enter a DNA string: ");
	scanf("%99[^\n]",DNA);
	for(i=0;DNA[i]!='\0';i++)
	{
		if(DNA[i]=='A' || DNA[i]=='T' || DNA[i]=='G' || DNA[i]=='C')
		{
			continue;
		}
		else
		{
			flg=1;
			break;
		}
	}
	if(flg)
	{
           printf("Not a DNA string\n");
	}
	else
	{
	   printf("Its a DNA string\n");
	}
}
