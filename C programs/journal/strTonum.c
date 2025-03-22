#include <stdio.h>
#include <stdlib.h>

int strTonum(char *str){
    int result;
    for(int i=0;str[i]!='\0'; i++){
        result = result*10 + str[i]-48;
    }
    return result;
}

void main(){
    char str[20];
    printf("Enter a String :");
    scanf("%s",str);
    int num = strTonum(str);
    printf("The entered string converted to number is %d\n",num);
}