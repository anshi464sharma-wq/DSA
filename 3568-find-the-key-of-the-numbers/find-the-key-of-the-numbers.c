int generateKey(int num1, int num2, int num3) {
    int ans = 0,place = 1;

    for(int i = 0; i < 4; i++){
        int a = num1 % 10;
        int b = num2 % 10;
        int c = num3 % 10;

        int small = a;

        if(b < small)
        small = b;

        if(c < small)
        small = c;

        ans = ans + small * place;
        place = place * 10;

        num1 = num1 / 10;
        num2 = num2 / 10;
        num3 = num3 / 10;
    }
    return ans;
}