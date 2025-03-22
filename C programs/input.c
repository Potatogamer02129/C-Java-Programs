#include <stdio.h>
int main()
{
    char name[50];
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    
    printf("So your name is %s right\n",name);
    return 0;
}