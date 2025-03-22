#include <stdio.h>

char character(char* str,int pos){
    int i=0;
    while(i!=pos){
        str++;
        i++;
    }
    return *str;
}

void main(){
    printf("Enter a string: ");
    char str[100];
    scanf("%s",str);
    printf("Enter a positon: ");
    int pos;
    scanf("%d",&pos);
    int ch = character(str,pos);
    printf("Character at this position is %c\n",ch);
}