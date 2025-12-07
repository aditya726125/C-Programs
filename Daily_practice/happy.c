#include <stdio.h>
int main() {
    int n, temp, sum, d;
    scanf("%d", &n);
    temp = n;
    while (1) {
        sum = 0;
        while (temp > 0) {
            d = temp % 10;
            sum += d * d;
            temp /= 10;
        }
        if (sum == 1) {
            printf("Happy number");
            break;
        }
        if (sum == 4) {  // 4 is in the unhappy loop cycle
            printf("Not Happy");
            break;
        }
        temp = sum;
    }
    return 0;
}