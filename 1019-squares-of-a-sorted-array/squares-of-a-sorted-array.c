/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    for(int i = 0; i<numsSize; i++){
        nums[i] = nums[i]*nums[i];
    }
    for(int i = 0; i<numsSize; i++){
        for(int j = i+1; j<numsSize; j++){
            if(nums[i] > nums[j]){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    *returnSize = numsSize;
    return nums;
}