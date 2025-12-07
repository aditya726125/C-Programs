#include <stdio.h>
int main() {
    int n, i, sum = 0;
    scanf("%d", &n);

    for(i = 1; i <= n/2; i++) {  // proper divisors only
        if(n % i == 0)
            sum += i;
    }

    if(sum == n)
        printf("Perfect number");
    else if(sum > n)
        printf("Abundant number");
    else
        printf("Deficient number");

    return 0;
}