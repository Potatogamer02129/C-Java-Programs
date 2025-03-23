#include <stdio.h>
#include <stdlib.h>

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
    int size;
    int max=10000;
    int min=0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        arr[i]=min + rand() % (max-min)+1;
    }
    selectSort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    printf("\n");
}
