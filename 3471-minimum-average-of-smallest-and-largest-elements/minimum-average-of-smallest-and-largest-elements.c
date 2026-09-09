double minimumAverage(int* nums, int numsSize) {

    for(int i=0;i<numsSize-1;i++){
        for(int j=0;j<numsSize-1;j++){
            if(nums[j] > nums[j+1]){
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    double minavg = 100000000;

    for(int i=0; i<numsSize/2; i++){
        double avg = (nums[i] + nums[numsSize - 1 - i])/2.0;

        if(avg < minavg){
            minavg = avg;
        }
    }
    return minavg;

}