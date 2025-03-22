#include <stdio.h>

void commonValue(int *arr,int *arr2,int size){
    int *ptr1=arr;
    int *ptr2=arr2;
    int i,j;
    printf("Commone value in both these Arrays are: ");
    for(i=0;i<size;i++,ptr1++){
        for(j=0;j<size;j++,ptr2++){
            if(*ptr1==*ptr2){
                printf("%d ",*ptr1);
            }
        }
        ptr2=arr2;
    }
    
}

void main(){
    int arr[10];
    int arr2[10];
    int merged[20];
    int *ptr=arr;
    int *ptr2=arr2;
    for(int i=0;i<10;i++,ptr++){
        printf("Enter a number for Array[1]: ");
        scanf("%d",ptr);
    }
    ptr=arr2;
    for(int i=0;i<10;i++,ptr++){
        printf("Enter a number Array[2]: ");
        scanf("%d",ptr);
    }
    commonValue(arr,arr2,10);
}