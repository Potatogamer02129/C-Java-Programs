#include <stdio.h>
void main(){
    int arr[]={34,43,7654,7654,33456,22345,32,654,543,543,654,6543};
    int i,j,largest=arr[0],seclargest=arr[0],temp;
    for(i=0;i<11;i++){
        if(arr[i]>largest)
           largest=arr[i];
    }
    printf("The largest number is %d\n",largest);
    for(i=0;i<11;i++){
        if(arr[i]==largest)
        continue;
        if(arr[i]>seclargest){
           seclargest=arr[i];
        }
    }
    printf("The second largest number is %d\n",seclargest);
}