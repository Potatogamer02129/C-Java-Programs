#include <stdio.h>

int isDNA(char DNA){
    if(DNA=='A' || DNA=='T' || DNA=='G' || DNA=='C')
    return 1;
    else
    return 0;
}

void main(){
    char DNA,flg;
    printf("Enter a Capital Character: ");
    scanf("%c",&DNA);
    flg=isDNA(DNA);
    if(flg)
    printf("The entered character is a DNA character\n");
    else
    printf("Not a DNA character\n");
}