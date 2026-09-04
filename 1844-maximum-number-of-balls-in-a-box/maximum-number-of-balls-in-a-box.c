int countBalls(int lowLimit, int highLimit) {
    int box[100] = {0};
    int max = 0;

    for(int i = lowLimit; i<= highLimit; i++){
        int n=i;
        int sum = 0;

        //find sum of digits
        while(n>0){
            sum += n % 10;
            n = n/10;
        }
        box[sum]++;

        if(box[sum] > max){
            max = box[sum];
        }
    }
    return max;
}