#include <stdio.h>
int main() {
    int r, c, i, j;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    int a[10][10];
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    printf("Boundary elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            if(i == 0 || i == r - 1 || j == 0 || j == c - 1)
                printf("%d ", a[i][j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}