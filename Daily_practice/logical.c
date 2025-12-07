#include <stdio.h>
int main() {
    int a = 5, b = 10;
    printf("(a < b) && (a > 0) = %d\n", (a < b) && (a > 0));
    printf("(a > b) || (a > 0) = %d\n", (a > b) || (a > 0));
    printf("!(a < b) = %d\n", !(a < b));
    return 0;
}