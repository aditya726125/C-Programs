#include <stdio.h>
int main() {
    int n, i, k;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[100], temp[100];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter k (rotations): ");
    scanf("%d", &k);
    k = k % n;

    int index = 0;
    for(i = n - k; i < n; i++)
        temp[index++] = a[i];
    for(i = 0; i < n - k; i++)
        temp[index++] = a[i];

    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++)
        printf("%d ", temp[i]);
    return 0;
}