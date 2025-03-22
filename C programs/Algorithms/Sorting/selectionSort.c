#include <stdio.h>

void selectSort(int *arr,int size){
    int temp;
    int minIndex;
    for(int i=0;i<size;i++){
        minIndex=i;
        for(int j=i;j<size;j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
        if(i!=minIndex){
        temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
        }


    }
}

void main(){
    int arr[10]={3,2,6,5,4,3,75,43,54,-1};
    selectSort(arr,10);
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");
}