#include <stdio.h>
#include <stdlib.h>

void Swap(char** p1,char** p2){
char* temp;
temp=*p1;
*p1=*p2;
*p2=temp;
}

int main(){
    char *str1=malloc(100 * sizeof(char));
    char *str2=malloc(100 * sizeof(char));
    printf("Enter a string: ");
    fgets(str1,(100 * sizeof(char)),stdin);
    printf("Enter a string: ");
    fgets(str2,(100 * sizeof(char)),stdin);
    char **p1=&str1;
    char **p2=&str2;
    Swap(p1,p2);
    printf("Swapped sting 1 is %sAnd Swapped string 2 is %s\n",str1,str2); 
    free(str1);   
    free(str2);   
}