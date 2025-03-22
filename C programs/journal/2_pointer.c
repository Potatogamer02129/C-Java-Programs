#include <stdio.h>

void main(){
    int arr[10];
    int *ptr=arr;
    for(int i=0;i<10;i++,ptr++){
        printf("Enter a number: ");
        scanf("%d",ptr);
    }
    ptr=arr;
    for(int i=0;i<10;i++,ptr++){
        printf("%d ",*ptr);
    }
    printf("\n");
}