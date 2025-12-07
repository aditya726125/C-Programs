#include <stdio.h>
int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    int g = gcd(x, y);
    long long lcm = (long long)x * y / g;
    printf("LCM = %lld\n", lcm);
    return 0;
}