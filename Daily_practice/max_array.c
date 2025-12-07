#include <stdio.h>
int maxInArray(int a[], int n) {
    int i, max = a[0];
    for(i = 1; i < n; i++)
        if(a[i] > max) max = a[i];
    return max;
}
int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[100];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Max = %d\n", maxInArray(a, n));
    return 0;
}