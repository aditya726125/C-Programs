#include <stdio.h>
int main() {
    int n, i, j = 0;
    printf("Enter size (sorted array): ");
    scanf("%d", &n);
    int a[100], b[100];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    b[j++] = a[0];
    for(i = 1; i < n; i++) {
        if(a[i] != a[i - 1])
            b[j++] = a[i];
    }
    printf("Array without duplicates:\n");
    for(i = 0; i < j; i++)
        printf("%d ", b[i]);
    return 0;
}
