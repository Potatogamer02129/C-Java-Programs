#include <stdio.h>
void main(){
    char str1[50];
    printf("Enter a string :");
    scanf("%[^\n]",str1);
    int i;
    for(i=0;str1[i]!='\0';i++){
        if(str1[i]>=65 && str1[i]<=90){
            str1[i]+=32;
        }
    }
    printf("%s",str1);
}