#include <stdio.h>

int arraysum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}

void main(){
    int size;
    printf("Enter size of the array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("Enter array element no.%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The sum of all array element is %d\n",arraysum(arr,size));
}