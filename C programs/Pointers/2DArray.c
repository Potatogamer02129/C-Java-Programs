#include <stdio.h>

void main(){
    int Arr[2][3];
    for(int i=0;i<2;i++){
        for (int j = 0; j < 3; j++)
        {
           printf("Enter number for Row no.%d: ",i);
           scanf("%d",&Arr[i][j]);
        }
        
    }
    printf("%p\n",Arr);
    printf("%p\n",&Arr);
    printf("%p\n",&Arr[0][0]);
    printf("%p\n",&Arr[1]);
    printf("%p\n",*Arr);
    printf("%d\n",Arr[1][2]);
}