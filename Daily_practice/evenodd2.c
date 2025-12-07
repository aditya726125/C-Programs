#include <stdio.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    long double b = a / 2.0;

    if (b == (int)b) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
    return 0;
}