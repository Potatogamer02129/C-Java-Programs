#include <stdio.h>
void main()
{
    char str1[50],str2[50];
    printf("Enter a string :");
    scanf("%[^\n]",str1);
    getchar();
    printf("Enter a string :");
    scanf("%[^\n]",str2);
    int i,j,cnt;
    for(i=0;str2[i]!='\0';i++,cnt=0){
        for(j=0;str1[j]!='\0';j++){
            if(str2[i]==str1[j]){
                cnt++;
            }
        }
        if(cnt==0){
            printf("This character %c in string 2 is not present in string 1\n",str2[i]);
        }
        }
}