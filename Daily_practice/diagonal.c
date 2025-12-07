#include <stdio.h>
int main() {
    int n, i, j, sum = 0;
    printf("Enter size (n x n): ");
    scanf("%d", &n);
    int a[10][10];
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for(i = 0; i < n; i++)
        sum += a[i][i];
    printf("Diagonal sum = %d\n", sum);
    return 0;
}