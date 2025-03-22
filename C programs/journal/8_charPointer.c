#include <stdio.h>
#include <stdlib.h>

void UpperCase(char* str){
    for(int i=0;*str!='\0';i++,str++){
        *str = tolower(*str);
    }
}

void main(){
    char str[100];
    printf("ENTER a string: ");
    scanf("%s",str);
    UpperCase(str);
    printf("The string in Lower case is : %s\n",str);

}