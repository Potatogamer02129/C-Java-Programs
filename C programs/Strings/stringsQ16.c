#include <stdio.h>
void main(){
     char str1[25],str2[25];
     int i,flg=1;
     printf("Enter the string: ");
     scanf("%[^\n]",str1);
     getchar();
     printf("Enter the string: ");
     scanf("%[^\n]",str2);
     for(i=0;str1[i]!='\0' || str2[i]!='\0';i++)
     {
        if(str1[i]!=str2[i])
        {
            flg=0;
            break;
        }
     }  
     if(flg)
     {
        printf("They are the same string\n");
     }  
     else
     {
        printf("not same\n");
     }
}
