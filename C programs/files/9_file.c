#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main(){
    char filepath[20];
    char buffer[255];
    int acnt=0;
    int GC=0;
    int AT=0;
    printf("Enter a File name: ");
    scanf("%s",filepath);
    FILE *fp = fopen(filepath,"r");
    char ch;
    if(fp==NULL){
        printf("The file doesnt exist\n");
        return;
    }
    else{
        while((ch=fgetc(fp))!=EOF)
        {
            acnt++;
        ch = toupper(ch);
        switch (ch)
        {
        case 'A': case 'T':
            AT++;
            break;
        case 'G': case 'C':
            GC++;
            break;
        
        default:
            break;
        }
        }
    }
    fclose(fp);
    int percent = (float)GC/acnt * 100;
        printf("\nThis file has %d  percent GC content and %d percent AT content\n",percent,100-percent);
}