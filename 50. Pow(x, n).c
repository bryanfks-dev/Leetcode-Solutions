double myPow(double x, int n){
    if (x == 1 || n == 0) return 1;

    if (n % 2 == 0) {
        x *= x;
        n /= 2;
    }
    
    return (n < 0) ? myPow(x, n + 1) / x : x * myPow(x, n - 1);
}
