#include <stdio.h>
int reverseHelper(int n, int rev) {
    if(n == 0) return rev;
    return reverseHelper(n / 10, rev * 10 + (n % 10));
}
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Reverse = %d\n", reverseHelper(n, 0));
    return 0;
}