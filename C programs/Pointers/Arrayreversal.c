#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int* arr=(int *)malloc(size * sizeof(int));
    if(!arr){
        printf("Memory not allocated\n");
        return 1;
    }
    for(int i=0;i<size;i++){
        printf("Enter the number %d: ",i+1);
        scanf("%d",(arr+i));
    }
    int j=size-1;
    for(int i=0;i<size/2;i++,j--){
        int tmp=*(arr+i);
        *(arr+i)=*(arr+j);
        *(arr+j)=tmp;
    }
    printf("The reversed array is: ");
    for(int i=0;i<size;i++){
        printf("%d ",*(arr+i));
    }    
    free(arr);
}