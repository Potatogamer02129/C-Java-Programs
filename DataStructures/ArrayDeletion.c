#include <stdio.h>
#include <stdlib.h>

void Delete(int arr[],int size,int val){
    for(int i=0;i<size;i++){
        if(arr[i]==val){
            for(int j=i;j<size-1;j++){
                arr[j]=arr[j+1];
            }
            i--;
        }
    }
}

void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    Delete(arr,10,5);
    printArr(arr,10);
}