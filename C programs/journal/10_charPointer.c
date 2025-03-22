#include <stdio.h>

void printSpecific(char *str,int start,int end){
    while(start!=end){
        printf("%c",*str);
        str++; start++;
    }
    printf("\n");
}

void main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    printSpecific(str,0,4);
}