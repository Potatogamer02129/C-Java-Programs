#include <stdio.h>
void main()
{
	char str[25];
	int i,strlen=0,j,flg=1;
	printf("Enter a string :");
	scanf("%s",str);
	while(str[strlen]!='\0')
	{
		strlen++;
	}
	for(i=0,j=strlen-1;i<=strlen/2;i++,j--)
	{
		if(str[i]!=str[j])
		{
			flg=0;
			printf("Not a palindrome\n");
			break;
		}
	}
	if(flg==1){
		printf("The string is a palindrome\n");
	}
}
