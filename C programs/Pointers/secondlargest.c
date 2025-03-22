#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
    int size,seclarge=INT_MIN;
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
    int large=*(arr);
    for(int i=0;i<size;i++){
        if(*(arr+i)>large){
            seclarge=large;
            large=*(arr+i);
        }
        else if(*(arr+i)>seclarge && *(arr+i)!=large){
            seclarge=*(arr+i);
        }
    }    
    if(seclarge==INT_MIN)
    printf("No second largest number\n");
    else
    printf("The second largest of the array is %d\n",seclarge);
    free(arr);
}