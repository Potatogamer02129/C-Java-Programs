#include <stdio.h>
void main()
{
	char DNA[100];
	int i;
	printf("Enter a DNA string: ");
	scanf("%[^\n]",DNA);
        for(i=0;DNA[i]!='\n';i++)
	{
		if(DNA[i]=='A')
		printf("U");
		else if(DNA[i]=='T')
		printf("A");
	        else if(DNA[i]=='G')
		printf("C");
	        else if(DNA[i]=='C')
		printf("G");	
	}	
}
