#include <stdio.h>

void main(){
    char filepath[20];
    char buffer[255];
    int acnt=0;
    int scnt=0;
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
            if(ch==' ' || ch=='\n')
            acnt++;
            if(ch=='\n')
            scnt++;
            printf("%c",ch);
        }
    }
    printf("This file has %d words and %d lines",acnt,scnt);
    fclose(fp);
}