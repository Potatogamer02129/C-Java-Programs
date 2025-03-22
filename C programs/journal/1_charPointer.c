#include <stdio.h>

int Strlength(char *str){
    int i;
    for(i=0;*str!='\0';i++,str++);
    return i;
}


void main(){
    char str[100];
    printf("Enter a String: ");
    scanf("%s",str);
    int length = Strlength(str);
    printf("The length of the string is %d\n",length);
}