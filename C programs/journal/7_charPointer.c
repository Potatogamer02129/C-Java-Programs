#include <stdio.h>
#include <stdlib.h>

void UpperCase(char* str){
    for(int i=0;*str!='\0';i++,str++){
        *str = toupper(*str);
    }
}

void main(){
    char str[100];
    printf("ENTER a string: ");
    scanf("%s",str);
    UpperCase(str);
    printf("The sting in Upper case is : %s\n",str);

}