#include <stdio.h>
void main(){
    char str[25];
    int i;
    printf("Enter a String: ");
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]<'z' && str[i]>'a')
        continue;
        else if(str[i]<'Z' && str[i]>'A')
        continue;
        else if(str[i]<9 && str[i]>1)
        continue;
        else
        printf("%c\n",str[i]);
    }
}