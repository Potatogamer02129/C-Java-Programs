#include <stdio.h>

void StringRev(char str[],int len){
    char temp,j,i;
    if(str[len]=='\0'){
        i=0;
    }
    if(i<len/2){
        temp=str[i++];
        str[i]=str[len];
        str[len]=temp;
        StringRev(str,len-1);
    }
    else{
        printf("%s",str);
    }
}

void main(){
    char str[10];
    int len=0;
    printf("Enter the string: ");
    scanf("%s",str);
    while(str[len]!='\0'){
        len++;
    }
    printf("This string reversed is :");
    StringRev(str,len-1);
}