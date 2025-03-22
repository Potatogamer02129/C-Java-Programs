#include <stdio.h>
void main()
{
	char str[25];
	int i,vow=0,cons=0;
	printf("Enter a string: ");
	scanf("%24[^\n]",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' '){
			continue;
		}
		else if(str[i]=='a' || str[i]=='i' || str[i]=='e' || str[i]=='o' || str[i]=='u')
		{
			vow++;
		}
		else
		{
			cons++;
		}	
	}
	printf("The string contains %d vowels and %d consonants\n",vow,cons);
}
