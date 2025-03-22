#include <stdio.h>
#include<string.h>

char *mergeStrings(char* str1,char* str2){
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    static char result[100];
    int i=0;
    while(*str1!='\0' || *str2!='\0'){
        if(i<len1){
            result[i]=*str1;
            str1++;
        }
        else{
            result[i]=*str2;
            str2++;
        } 
        i++;
    }
    result[i]='\0';
    return result;
}

void main(){
    char str1[50],str2[50];
    printf("Enter a strinf[1]: ");
    scanf("%s",str1);

    printf("Enter a strinf[2]: ");
    scanf(" %s",str2);
    char *merged = mergeStrings(str1,str2);
    printf("%s\n",merged);

}