#include <stdio.h>
void main(){
    int arr[10]={10,9,1,2,32,324,436,756,4324,324};
    int i,j,temp;
    for(i=0;i<10;i++){
        for(j=0;j<9;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<=9;i++){
        printf("%d ",arr[i]);
    }
}