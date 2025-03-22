#include <stdio.h>

void main(){
    int arr[10];
    int arr2[10];
    int merged[20];
    int *bigarr=merged;
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
    ptr=arr;
    int i;
    for(i=0;i<20;i++,bigarr++){
        if(i<=9){
            *bigarr=*ptr;
            ptr++;
        }
        else{
            *bigarr=*ptr2;
            ptr2++;
        }
    }
    printf("New merged array is :");
    bigarr=merged;
    for(i=0;i<20;i++,bigarr++){
        printf("%d ",*bigarr);
    }
}