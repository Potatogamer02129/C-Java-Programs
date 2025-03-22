#include <stdio.h>
void main(){
char DNA[100];
int i,strlen,j,flg=1;
printf("Enter a DNA string: ");
scanf("%[^\n]",DNA);
while(DNA[strlen]!='\0'){
    strlen++;
}  
for(i=0,j=strlen-3;i<=2;i++,j++)
{
    if(DNA[i]!=DNA[j]){
        flg=0;
        break;
    }
} 
if(flg)
printf("Same\n");
else
printf("Not same\n");
}