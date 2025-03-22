#include <stdio.h>

int LinearSearch(char *arr,char SearchValue,int Size){
    for(int i=0;i<Size;i++,arr++){
        if(*arr==SearchValue) return i;
    }
    return -1;
}

void main(){
    char arr[10]="Hello";
    int index=LinearSearch(arr,'l',10);
    printf("The value l found at index %d\n",index);
}