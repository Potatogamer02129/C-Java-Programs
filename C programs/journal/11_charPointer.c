#include <stdio.h>

void printSpecific(char *str,int start,int amount){
    str = &str[start];
    for(int i = 0;i<amount && *str!='\0';i++,str++){
        printf("%c",*str);
    }
    printf("\n");
}

void main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    printSpecific(str,1,3);
}