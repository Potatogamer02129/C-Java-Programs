#include <stdio.h>

void main(){
    int arr[10];
    int temp;
    int *tempPtr=&temp;
    int *ptr=arr;
    for(int i=0;i<10;i++,ptr++){
        printf("Enter a number: ");
        scanf("%d",ptr);
    }
    ptr=arr;
    int *ptrj=&arr[9];
    for(int i=0;i<5;i++,ptr++,ptrj--){
        *tempPtr = *ptr;
        *ptr = *ptrj;
        *ptrj = *tempPtr;
    }
    ptr=arr;
    for(int i=0;i<10;i++,ptr++){
        printf("%d ",*ptr);
    }
    printf("\n");
    
}