#include <stdio.h>

int *twoSum(int *nums,int numsSize,int target){
    int i ,j;
    static int result[2];
    for(i=0;i<numsSize;i++){
        for(j=0;j<numsSize;j++){
            if(i==j) continue;
            if((nums[i]+nums[j])==target){
                result[0]=i;
                result[1]=j;
                return result;
            }
        }
    }
    return -1;
}

void main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *result=twoSum(arr,10,9);
    printf("Numbers at indexes %d and %d which are %d and %d sum upto give target value which is 9\n",result[0],result[1],arr[result[0]],arr[result[1]]);
}