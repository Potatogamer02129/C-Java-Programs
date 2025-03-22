#include <stdio.h>
void main()
{
	char DNA[100],cDNA[100];
	int i,flg=0;
	printf("Enter a DNA string: ");
	scanf("%[^\n]",DNA);
	for(i=0;DNA[i]!='\0';i++)
	{
		switch(DNA[i]){
			case 'A':
				cDNA[i]='T';
				break;
			case 'T':
			        cDNA[i]='A';
			        break;
			case 'G':
			        cDNA[i]='C';
			        break;
			case 'C':
			        cDNA[i]='G';
			        break;
			default:
			        printf("Not a DNA base pair");
				flg=1;
			        break;	
		}
		if(flg)
		{
			break;
		}
	}
	cDNA[i]='\0';
	printf("The Comp DNA is :\n%s\n",cDNA);
}
