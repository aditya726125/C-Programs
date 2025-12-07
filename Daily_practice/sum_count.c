#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int sum = 0, count = 0;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            sum += i;
            count++;
        }
    }

    printf("Number of divisors = %d\n", count);
    printf("Sum of divisors = %d\n", sum);

    return 0;
}