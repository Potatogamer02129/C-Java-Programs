int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize=malloc(2 * sizeof(int));
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                *returnSize=i;
                *(returnSize+1)=j;
                return *returnSize;
            }
        }
    }
    return 0;
}