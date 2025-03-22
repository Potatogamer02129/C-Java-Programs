#include <stdio.h>

int *SmallandLarge(int *arr,int Size){
    int Max=arr[0];
    int Min=arr[0];
    static int result[2];
    for(int i=0;i<Size;i++){
        if(Max<arr[i]) Max=arr[i];
        if(Max>arr[i]) Min=arr[i];
    }
    result[0]=Max;
    result[1]=Min;
    return result;
}

void main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int* result=SmallandLarge(arr,10);
    printf("max element = %d \nmin element = %d\n",result[0],result[1]);

}