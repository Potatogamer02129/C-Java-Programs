#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fp;
    if((fp=fopen("hiv.fasta","r"))==NULL){
        printf("Couldn't open file");
        exit(1);
    }
    char buffer[256];

    // Skip the first line
    if (fgets(buffer, sizeof(buffer), fp) == NULL) {
        // Handle error or end of file
        perror("Error reading file");
        fclose(fp);
        exit(1);
    }

    char ch;

    while((ch=fgetc(fp)) != EOF)
    {
       printf("%c",ch);
    }
    fclose(fp);
    printf("\n");
}