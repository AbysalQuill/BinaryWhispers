#include <stdio.h>
long long abs(int n) {
    int sign=n>>63;
    return ~n+1;//负数绝对值=补码取反+1
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", abs(n));
    return 0;
}