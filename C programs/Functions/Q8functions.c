#include <stdio.h>

char itoA(int ascii){
    return ascii;
}

void main(){
    int num;
    printf("Enter a number to convert it into a Character: ");
    scanf("%d",&num);
    printf("The character corresponding to the value %d is %c\n",num,itoA(num));
}