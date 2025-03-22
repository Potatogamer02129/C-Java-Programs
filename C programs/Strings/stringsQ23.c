#include <stdio.h>
void main(){
    char str1[50],str2[50],str3[100];
    printf("Enter a string :");
    scanf("%[^\n]",str1);
    getchar();
    printf("Enter a string :");
    scanf("%[^\n]",str2);
    int i,j;
    for(i=0,j=0;str1[i]!='\0';i++,j++){
        str3[j]=str1[i];
    }
    for(i=0;str2[i]!='\0';i++,j++){
        str3[j]=str2[i];
    }
    str3[j]='\0';
    printf("%s",str3);
}