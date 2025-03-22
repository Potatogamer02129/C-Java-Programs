#include <stdio.h>

void insertionSort(int* arr,int Size){
    for(int i=1;i<Size;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}

void main(){
    int arr[10]={3,2,6,5,4,3,75,43,54,-1};
    insertionSort(arr,10);
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");
}