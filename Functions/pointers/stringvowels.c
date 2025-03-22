#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    int size,cntvow=0,len;
    printf("Enter the size of the string: ");
    scanf("%d",&size);
    char *str=(char *)malloc(size * sizeof(char));
    if(str == NULL){
        printf("Memory allocation failed");
        return 1;
    }
    printf("Enter the String: ");
    scanf(" ");
    fgets(str,size,stdin);
    len=strlen(str);
    for(int i=0;i<len;i++){
        char ch=tolower(*(str+i));
        if(ch=='i' ||ch=='a' || ch=='o' || ch=='u' || ch=='e'){
            cntvow++;
         }
    }
    printf("The written string has %d Vowels",cntvow);
    free(str);
    return 0;
}