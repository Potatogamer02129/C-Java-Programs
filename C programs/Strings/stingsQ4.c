#include <stdio.h>
void main()
{
	char str[25],temp;
	int i,strlen=0,j;
	printf("Enter a string : ");
	scanf("%24[^\n]",str);
	while(str[strlen]!='\0'){
		strlen++;
	}
	for(i=0,j=strlen-1;i<=strlen/2;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	printf("%s\n",str);
}
