#include <stdio.h>
int main() {
    int r, c, i, j;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    int a[10][10];
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Row sums:\n");
    for(i = 0; i < r; i++) {
        int sum = 0;
        for(j = 0; j < c; j++)
            sum += a[i][j];
        printf("Row %d = %d\n", i, sum);
    }

    printf("Column sums:\n");
    for(j = 0; j < c; j++) {
        int sum = 0;
        for(i = 0; i < r; i++)
            sum += a[i][j];
        printf("Col %d = %d\n", j, sum);
    }
    return 0;
}