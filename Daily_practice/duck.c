#include <stdio.h>
int main() {
    long long n;
    int hasZero = 0;
    scanf("%lld", &n);

    // Remove leading zeros if any (theoretically)
    while (n > 0 && n % 10 == 0) {
        // This is NOT "start" check (we read from right),
        // so better read as string in strict definition.
        // Here we'll do a simpler numeric version:
        break;
    }

    while (n > 0) {
        if (n % 10 == 0) {
            hasZero = 1;
            break;
        }
        n /= 10;
    }
    if (hasZero) printf("Duck number");
    else printf("Not Duck");
    return 0;
}