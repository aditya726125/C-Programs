#include <stdio.h>
#include <math.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int n = a; n <= b; n++) {
        int temp = n, digits = 0;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        temp = n;
        int sum = 0;
        while (temp > 0) {
            int d = temp % 10;
            sum += (int)pow(d, digits);
            temp /= 10;
        }
        if (sum == n) printf("%d ", n);
    }
    return 0;
}