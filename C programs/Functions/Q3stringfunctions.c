#include <stdio.h>

int compare(char str[],char str2[]){
for(int i=0;str[i]!='\0';i++){
    if(str[i]!=str2[i])
        return 0;
}
return 1;
}

void main(){
    char str[100],str2[100];
    int flg;
    printf("Enter a string: ");
    scanf("%s",str);
    printf("Enter a string: ");
    scanf("%s",str2);
    flg=compare(str,str2);
    if(flg)
    printf("same\n");
    else
    printf("not same\n");
}