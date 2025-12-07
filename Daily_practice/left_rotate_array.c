#include <stdio.h>
int main() {
    int n, i, first;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[100];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    first = a[0];
    for(i = 0; i < n - 1; i++)
        a[i] = a[i + 1];
    a[n - 1] = first;

    printf("Array after left rotation by 1:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
