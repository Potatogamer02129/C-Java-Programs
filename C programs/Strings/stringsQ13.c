#include <stdio.h>
void main()
{
	char DNA[100];
	int Acnt=0,Tcnt=0,Gcnt=0,Ccnt=0;
	float GCcont;
	printf("Enter a Dna string: ");
	scanf("%99[^\n]",DNA);
	for(int i=0;DNA[i]!='\0';i++)
	{
		if(DNA[i]=='A')
			Acnt++;
		else if(DNA[i]=='T')
			Tcnt++;
		else if(DNA[i]=='G')
			Gcnt++;
		else if(DNA[i]=='C')
			Ccnt++;
	}
	GCcont=((float)(Gcnt+Ccnt)/(Gcnt+Ccnt+Acnt+Tcnt))*100;
	printf("The GC content in this DNA string is %.2f percent",GCcont);
}
