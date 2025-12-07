#include <stdio.h>

int main() {
    int a, r = 0;
    printf("Enter a number to reverse: ");
    scanf("%d", &a);

    while (a) {
        r = r * 10 + a % 10;
        a = a / 10;
    }

    printf("Reversed number = %d\n", r);
    return 0;
}