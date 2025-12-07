#include <stdio.h>
int main() {
    int n1, n2, i;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int a[100];
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int b[100];
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    int c[200];
    int k = 0;
    for(i = 0; i < n1; i++)
        c[k++] = a[i];
    for(i = 0; i < n2; i++)
        c[k++] = b[i];

    printf("Merged array:\n");
    for(i = 0; i < k; i++)
        printf("%d ", c[i]);
    return 0;
}