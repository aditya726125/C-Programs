#include <stdio.h>
int sumArrayRec(int a[], int n) {
    if(n == 0) return 0;
    return a[n - 1] + sumArrayRec(a, n - 1);
}
int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[100];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Sum = %d\n", sumArrayRec(a, n));
    return 0;
}