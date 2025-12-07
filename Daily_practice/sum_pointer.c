#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[100];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int *p = a;
    for(i = 0; i < n; i++)
        sum += *(p + i);
    printf("Sum = %d\n", sum);
    return 0;
}