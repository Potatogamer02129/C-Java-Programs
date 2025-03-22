#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	char buffer[255];
	char consume[100];
	int index=0;
	printf("Enter the name of the File to Search: ");
	char filepath[100];
	scanf("%s",filepath);
	FILE *fp = fopen(filepath,"r");
	if(fp==NULL)
	{
		printf("The file doesnt exist\nExiting..........\n");
		return;
	}
	fgets(consume,99,fp);
	printf("Enter a Sequence to be searched: ");
	scanf("%s",buffer);
	char ch;
	int flg=0;
	int filecnt=0;
	int i=0;
//	int length=strlen(buffer);
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch=='\n') continue;
		if(ch==buffer[index]){
			if(index==0) i=filecnt;
			index++;
			if(buffer[index]=='\0')
			{
				flg=1;
			//	index = filecnt - length;
				break;
			}
               	}
		else if(ch!=buffer[index])
		{
			index=0;
		}
		filecnt++;

}
fclose(fp);
	if(flg)
	printf("The sequence Found at position %d\n",i-1);
	else
	printf("Not found\n");
}
