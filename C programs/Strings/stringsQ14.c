#include <stdio.h>
void main()
{
	char str[100],srch;
	int i,cnt=0;
	printf("Enter a string: ");
	scanf("%99[^\n]",str);
	printf("Enter a character to search: ");
	scanf(" %c",&srch);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==srch)
		{
			cnt++;
		}
	}
	if(cnt==0){
	       printf("Not found");
              }
	printf("Found the character %d times",cnt);
}
