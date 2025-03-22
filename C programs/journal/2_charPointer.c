#include <stdio.h>

int strCompare(char *str1,char *str2){
    int len1;
    int len2;
    while(*str1!='\0'){
        str1++; len1++;
    }
    while(*str2!='\0'){
        str2++; len2++;
    }
    if(len1>len2) return 1;
    if(len2<len1) return -1;
    if(len1==len2) return 0;
}

void main(){
    char str1[100];
    char str2[100];
    printf("Enter a string[1]: ");
    scanf("%s",str1);
    printf("Enter a string[2]: ");
    scanf("%s",str2);
    int result = strCompare(str1,str2);
    if(result) printf("String 1 is longer\n");
    else if(result == -1) printf("String 2 is longer\n");
    else printf("They are the same length");
}