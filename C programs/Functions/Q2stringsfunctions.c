#include <stdio.h>

int length(char str[]){
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    return len;
}

void main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    printf("The lenght of the string is %d\n",length(str));
}