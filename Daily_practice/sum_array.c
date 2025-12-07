#include <stdio.h>
int sumArray(int a[], int n) {
    int i, s = 0;
    for(i = 0; i < n; i++)
        s += a[i];
    return s;
}
int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[100];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Sum = %d\n", sumArray(a, n));
    return 0;
}
