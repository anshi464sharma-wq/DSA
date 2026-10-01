/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int *ans = malloc(numsSize * sizeof(int));
    for(int i=0; i<numsSize; i++){
        int count = 0;
        int j = 0;
        while(j<numsSize){
            if(nums[i] > nums[j]){
                count++;
            }
            j++;
        }
        ans[i] = count;
    }
    *returnSize = numsSize;
    return ans;
}

    
    
    
    
