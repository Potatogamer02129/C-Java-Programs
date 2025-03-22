#include <stdio.h>
void main()
{
	char str[50];
	int strlen=0;
	printf("Enter a string :");
	scanf("%[^\n]",str);
	while(str[strlen]!='\0'){
		strlen++;
	}
	printf("The length of the string is %d",strlen);
}
