#include <stdio.h>
long long fact(int n) {
    long long f = 1;
    int i;
    for(i = 1; i <= n; i++)
        f *= i;
    return f;
}
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Factorial = %lld\n", fact(n));
    return 0;
}