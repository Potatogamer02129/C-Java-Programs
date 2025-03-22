#include <stdio.h>
void main()
{
    char DNA[100];
    int i;
    printf("Enter a DNA string: ");
    scanf("%99[^\n]",DNA);
    for(i=0;DNA[i+1]!='\0';i++){
        printf("%c%c ",DNA[i],DNA[i+1]);
    }
    printf("\n");
}