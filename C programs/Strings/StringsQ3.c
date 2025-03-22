#include <stdio.h>
void main()
{
	char str1[25],str2[25];
	printf("Enter the string: ");
	scanf("%[^\n]",str1);
	int i;
	for(i=0;str1[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
         str2[i]='\0';
		 printf("%s\n",str2);
}
