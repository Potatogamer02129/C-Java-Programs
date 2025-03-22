#include <stdio.h>

int LinearSearch(int *arr,int SearchValue,int Size){
    int result=-1;
    for(int i=0;i<Size;i++,arr++){
        if(*arr==SearchValue) result=i;
    }
    return result;
}

void main(){
    int arr[10]={1,2,3,4,5,6,7,8,7,10};
    int index=LinearSearch(arr,7,10);
    printf("The value 7 found at index %d\n",index);
}