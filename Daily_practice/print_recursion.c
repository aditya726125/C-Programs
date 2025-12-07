#include <stdio.h>
void printInc(int n) {
    if(n == 0) return;
    printInc(n - 1);
    printf("%d ", n);
}
void printDec(int n) {
    if(n == 0) return;
    printf("%d ", n);
    printDec(n - 1);
}
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Increasing: ");
    printInc(n);
    printf("\nDecreasing: ");
    printDec(n);
    return 0;
}
