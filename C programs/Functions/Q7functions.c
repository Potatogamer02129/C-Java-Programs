#include <stdio.h>

int Atoi(char ch){
    return ch;
}

void main(){
   char ch;
   printf("Enter a Character: ");
   scanf("%c",&ch);
   printf("The ASCII value of this character is %d\n",Atoi(ch));
}