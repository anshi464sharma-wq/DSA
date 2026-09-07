int getLeastFrequentDigit(int n) {
    int count[10] = {0};

    while(n>0){
        count[n%10]++;
        n/=10;
    }
    int min = 1000;
    int ans = 0;

    for(int i = 0; i<10; i++){
        if(count[i]>0 && count[i]<min){
            min = count[i];
            ans = i;
        }
    }
    return ans;
}