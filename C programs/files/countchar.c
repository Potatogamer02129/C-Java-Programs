#include <stdio.h>
#include <stdlib.h>

void main(){
    char ch;
    int cntch=0,cntw=0,cntl=0;
    int indice=0,linech=0,max=0;
    FILE *fp=fopen("file1.txt","r");
    printf("Counting\nDone\n");
    while((ch=getc(fp))!=EOF){
        if(ch=='\n'){
            cntl++;
            if(linech>max){
                indice=cntl;
                max=linech;
            }
            linech=0;
        }
        if(ch!=' ' && ch!='\n'){
            cntch++; linech++;
        }
        if(ch==' ' || ch=='\n') cntw++;
    }
    printf("The file has %d characters\n",cntch);
    printf("The file has %d words\n",cntw);
    printf("The file has %d lines\n",cntl);
    printf("line no. %d is the longest with %d characters\n",indice,max);

}