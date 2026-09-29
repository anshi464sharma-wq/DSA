/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int* ans = (int*)malloc(2*sizeof(int));
    *returnSize = 2;
    int left = 0,right = numsSize-1;
    int first = -1, last = -1;

    //Find first occurance
    while(left <= right){
        int mid = left + (right - left)/2;
        if(nums[mid] == target){
            first = mid;
            right = mid -1; //search on left side
        }
        else if (nums[mid]<target){
            left = mid + 1;
        }else{
            right = mid -1;
        }
    }
    // find last occurance
    left = 0;
    right = numsSize-1;

    while(left <= right){
        int mid = left + (right - left)/2;

        if(nums[mid]==target){
            last = mid;
            left = mid + 1; //search on right side
        }
        else if (nums[mid]<target){
            left = mid + 1;
        }
        else{
            right = mid-1;
        }
    }
    ans[0] = first;
    ans[1] = last;

    return ans;

    
}