#include <stdio.h>
void main()
{
	char str[25];
	int i,cnt=0;
	printf("Enter a string : ");
	scanf("%24[^\n]",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			cnt++;
		}
	}
	printf("The string has %d words",cnt+1);
}
