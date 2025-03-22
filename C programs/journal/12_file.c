#include <stdio.h>

void main(){
    FILE *fp = fopen("file.txt","r");
    char ch;
    int cnt=0;
    if(fp==NULL){
        printf("The file doesn't exist\n");
        return;
    }
    char buffer[100];
    fgets(buffer,100,fp);
    while((ch=fgetc(fp))!=EOF){
        if(ch=='\n') continue;
        if(cnt == 2){
           printf(" ");
           cnt=0;
        }
        printf("%c",ch);
        cnt++;
    }
    fclose(fp);
}