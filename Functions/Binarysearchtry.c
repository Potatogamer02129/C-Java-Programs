#include <stdio.h>
#define size 10
int BinarySearch(int arr[],int n);

int main(){
    int num,arr[size]={1,2,3,4,5,6,7,8,9,10};
    printf("Enter a search value: ");
    scanf("%d",&num);
    printf("The number is present at %d ",BinarySearch(arr[10],num));
}

int BinarySearch(int arr[],int n){
int j=size/2,i=j;
while(n!=arr[i]){
if(n<arr[i]){
i=i/2;
}
}
return i;
}