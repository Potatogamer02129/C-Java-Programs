#include <stdio.h>
void main()
{
    char str1[50],str2[50];
    printf("Enter a string :");
    scanf("%[^\n]",str1);
    getchar();
    printf("Enter a string :");
    scanf("%[^\n]",str2);
    int i,j,flg=1,strlen1=0,strlen2=0;
    while(str2[strlen1]!='\0'){
        strlen1++;
    }
    while(str1[strlen2]!='\0'){
        strlen2++;
    }
    for(i=strlen1-1,j=strlen2-1;i>=0;i--,j--){
    if(str1[j]!=str2[i]){
        flg=0;
        break;
    }     
    }
    if(flg){
        printf("string1 ends with string2\n");
    }
    else{
        printf("string1 doesn't end with string2\n");
    }
}    