#include <stdio.h>

void main(){
    int arr[10];
    int arr2[10];
    int *ptr=arr;
    int *ptr2=arr2;
    for(int i=0;i<10;i++,ptr++){
        printf("Enter a number: ");
        scanf("%d",ptr);
    }
    ptr=arr2;
    for(int i=0;i<10;i++,ptr++){
        printf("Enter a number: ");
        scanf("%d",ptr);
    }
    ptr=arr;
    int i;
    for(i=0;i<10;i++,ptr++,ptr2++){
        if(*ptr!=*ptr2) break;
    }
    if(i==10) printf("Array 1 and 2 are the same\n");
    else printf("Both array are not same\n");
}