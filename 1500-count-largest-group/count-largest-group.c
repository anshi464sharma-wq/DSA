int countLargestGroup(int n) {
    int count[37] = {0};
    int max = 0;

    for(int i = 1; i<=n; i++){
        int x=i;
        int sum = 0;

        while(x>0){
            sum += x%10;
            x /= 10;
        }
        count[sum]++;

        if(count[sum] > max)
        max = count[sum];
    }
    int ans = 0;

    for (int i = 1; i<= 36; i++){
        if (count[i] == max)
        ans++;
    }
    return ans;
}