#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *file;
    if((file=fopen("hiv.fasta","r"))==NULL){
        printf("Couldn't open file");
        exit(1);
    }
    char buffer[256];

    // Skip the first line
    if (fgets(buffer, sizeof(buffer), file) == NULL) {
        // Handle error or end of file
        perror("Error reading file");
        fclose(file);
        exit(1);
    }

    char ch;
    FILE *fp=fopen("cRna.txt","w");
    fprintf(fp, "%s", buffer);
    printf("%s",buffer);

    while((ch=fgetc(file)) != EOF)
    {
        if(ch=='A'){
            ch='U';
        }
        else if(ch=='G'){
            ch='C';
        }
        else if(ch=='T'){
            ch='A';
        }
        else if(ch=='C'){
            ch='G';
        }
    // fprintf(fp,"%c",ch);
       fputc(ch,fp);
       printf("%c",ch);
    }
    fclose(file);
    fclose(fp);
    printf("\n");
}