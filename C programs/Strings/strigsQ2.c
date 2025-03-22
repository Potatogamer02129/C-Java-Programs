#include <stdio.h>
void main()
{
	char str[50];
	printf("Enter a string: ");
	scanf("%[^\n]",str);
	for(int i=0;str[i]!='\0';i++)
	{
		printf("%c\n",str[i]);
	}
}
