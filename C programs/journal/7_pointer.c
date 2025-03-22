#include <stdio.h>

void Largerthan(int *arr,int Size,int target){

    for(int i=0;i<Size;i++){
        if(arr[i]>target){
            printf(" %d",arr[i]);
        }
    }
    printf("\n");
}

void main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    Largerthan(arr,10,5);
}