#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int* x,int* y);
void quickSort(int *arr,int start,int end);
int partition(int *arr,int start,int end );

void main(){
    int size=10;
    int arr[10];
    for(int i=0;i<size;i++){
        arr[i]=rand() % 10000 + 1;
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n\n");
    quickSort(arr,0,size-1);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void quickSort(int *arr,int start,int end){
    if(start < end){
        int pivot_index = partition(arr,start,end);
        quickSort(arr,start,pivot_index-1);
        quickSort(arr,pivot_index+1,end);
    }
}

int partition(int *arr,int start,int end ){
    int pivot_val = arr[end];
    int i = start;
    for(int j = start ; j < end ; j++ )
    {
        if( arr[j] <= pivot_val )
        {
            swap( &arr[i] , &arr[j] );
            i++;
        }
    }
    swap( &arr[i] , &arr[end] );
    return i;
}