/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int* arr = malloc((right - left + 1)*sizeof(int));
    *returnSize = 0;
    for(int i = left;i<=right; i++){
        int temp = i;
        int valid = 1;

        while(temp>0){
            int digit = temp%10;

            if(digit == 0 || i%digit != 0){
                valid = 0;
                break;
            }
            temp = temp/10;
        }
        if(valid == 1){
            arr[*returnSize] = i;
            (*returnSize)++;
        }
    }
    return arr;
}