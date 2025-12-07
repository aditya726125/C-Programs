#include <stdio.h>
int main() {
    int a, b, gcd = 1;
    scanf("%d %d", &a, &b);

    int limit = a < b ? a : b;
    for(int i = 1; i <= limit; i++) {
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }

    if(gcd == 1)
        printf("Coprime");
    else
        printf("Not Coprime (GCD = %d)", gcd);

    return 0;
}
