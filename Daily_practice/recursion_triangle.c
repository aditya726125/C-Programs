#include <stdio.h>
void printLine(int n) {
    if(n == 0) return;
    printLine(n - 1);
    printf("*");
}
void pattern(int n, int i) {
    if(i > n) return;
    printLine(i);
    printf("\n");
    pattern(n, i + 1);
}
int main() {
    int n;
    printf("Enter rows: ");
    scanf("%d", &n);
    pattern(n, 1);
    return 0;
}