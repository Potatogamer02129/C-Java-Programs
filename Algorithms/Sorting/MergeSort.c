#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void merge_sort(int* arr,int length);
void merge_sort_recursion(int *arr,int l,int r);
void merge_sortedArray(int *arr,int l,int m,int r);

void main(){
    srand(time(NULL));
    int size=10;
    int arr[10];
    for(int i=0;i<size;i++){
        arr[i]=rand() % 10000 + 1;
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n\n");
    merge_sort(arr,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

void merge_sort(int* arr,int length){
    merge_sort_recursion(arr,0,length-1);
}

void merge_sort_recursion(int *arr,int l,int r){
    if(l < r){
    int m = l + (r-l) / 2;
    merge_sort_recursion(arr,l,m);
    merge_sort_recursion(arr,m+1,r);

    merge_sortedArray(arr,l,m,r);
    }
}
void merge_sortedArray(int *arr,int l,int m,int r)
{
    int left_length = m - l + 1;
    int right_length = r - m;

    int temp_left[left_length];
    int temp_right[right_length];

    int i,j,k;

    for ( i = 0; i < left_length ; i++)
        temp_left[i] = arr[l+i];

    for ( i = 0; i < right_length ; i++)
        temp_right[i] = arr[m+1+i];

    for( i=0 ,j=0,k=l;k<=r;k++)
    {
        if(j >= right_length || i < left_length && temp_left[i] <= temp_right[j])  //((i<left_length) && (j>=right_length) || temp_left[i]<=temp_right[j])
        {
            arr[k]= temp_left[i];
            i++;
        }
        else{
            arr[k]= temp_right[j];
            j++;
        }
    }
}
