#include <stdio.h>
#include <stdlib.h>

int main(){
    int size,sum=0;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int* arr=malloc(size * sizeof(int));
    if(!arr){
        printf("Memory not allocated\n");
        return 1;
    }
    for(int i=0;i<size;i++){
        printf("Enter the number %d: ",i+1);
        scanf("%d",(arr+i));
    }
    for(int i=0;i<size;i++){
        sum+=*(arr+i);
    }    
    printf("The sum of the array is %d\n",sum);
    free(arr);
}