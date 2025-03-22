#include <stdio.h>
#include <stdlib.h>

void main(){
    char filepath[20];
    char buffer[255];
    printf("Enter a File name: ");
    scanf("%s",filepath);
    FILE *fp = fopen(filepath,"w");
    printf("Enter your data and CTRL D or CTRL Z to stop writing: ");
        while((fgets(buffer,100,stdin))!=NULL){
            fputs(buffer,fp);
    }
    fclose(fp);
    char ch;
    int cnt=0;
    fp = fopen(filepath,"r");
    while((ch=fgetc(fp))!=EOF){
        printf("%c",ch);
        cnt++;
    }
    printf("This file has %d characters",cnt);
}
