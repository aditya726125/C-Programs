#include <stdio.h>
int maxRec(int a[], int n) {
    if(n == 1) return a[0];
    int maxRest = maxRec(a, n - 1);
    return (a[n - 1] > maxRest) ? a[n - 1] : maxRest;
}
int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[100];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Max = %d\n", maxRec(a, n));
    return 0;
}