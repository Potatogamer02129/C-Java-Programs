#include <stdio.h>
void main()
{
    char str1[50],str2[50];
    printf("Enter a string :");
    scanf("%[^\n]",str1);
    getchar();
    printf("Enter a string :");
    scanf("%[^\n]",str2);
    int i,flg=1;
    for(i=0;str2[i]!='\0';i++){
    if(str1[i]!=str2[i]){
        flg=0;
        break;
    }     
    }
    if(flg){
        printf("string1 starts with string2\n");
    }
    else{
        printf("string1 doesn't start with string2\n");
    }
}    