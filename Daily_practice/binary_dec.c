#include <stdio.h>
int binToDec(long long bin, int pos) {
    if(bin == 0) return 0;
    int bit = bin % 10;
    return bit * (1 << pos) + binToDec(bin / 10, pos + 1);
}
int main() {
    long long bin;
    printf("Enter binary number: ");
    scanf("%lld", &bin);
    printf("Decimal = %d\n", binToDec(bin, 0));
    return 0;
}