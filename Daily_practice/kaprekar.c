#include <stdio.h>
#include <math.h>
int main() {
    int n;
    scanf("%d", &n);
    long long sq = (long long)n * n;
    int digits = 0;
    long long temp = sq;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    int isKaprekar = 0;
    for (int i = 1; i < digits; i++) {
        long long pow10 = 1;
        for (int k = 0; k < i; k++) pow10 *= 10;
        long long right = sq % pow10;
        long long left = sq / pow10;
        if (right > 0 && left + right == n) {
            isKaprekar = 1;
            break;
        }
    }
    if (n == 1) isKaprekar = 1; // 1 is also Kaprekar
    if (isKaprekar) printf("Kaprekar number");
    else printf("Not Kaprekar");
    return 0;
}