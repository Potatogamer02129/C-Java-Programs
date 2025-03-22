
#include <stdio.h>
#include <string.h>
void main()
{ 
char name[50];
printf("Enter your name :");
fgets(name,sizeof(name),stdin);
name[strcspn(name,"\n")]='\0';
printf("oH hello %s\n",name);
}
