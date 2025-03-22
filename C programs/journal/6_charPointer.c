#include <stdio.h>

int occurence(char* str,char ch){
    int repeat=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch) repeat++;
    }
    return repeat;
}

void main(){
    char str[100];
    printf("Enter a String: ");
    scanf("%s",str);
    printf("Enter a Character to Search: ");
    char ch;
    scanf(" %c",&ch);
    int occurs = occurence(str,ch);
    printf("THis character occurs %d times in this String\n",occurs);
}