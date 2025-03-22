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
    fgets(buffer,100,fp);
    if(fp==NULL){
        printf("The file doesnt exist\n");
        return;
    }
    else{
        while((ch=fgetc(fp))!=EOF)
        {
            acnt++;
            printf("%c",ch);
        }
    }
    printf("This file has %d characters",acnt);
    fclose(fp);
}