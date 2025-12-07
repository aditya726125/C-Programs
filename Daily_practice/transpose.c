#include <stdio.h>
int main() {
    int r, c, i, j;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    int A[10][10], T[10][10];
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &A[i][j]);
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            T[j][i] = A[i][j];
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++)
            printf("%d ", T[i][j]);
        printf("\n");
    }
    return 0;
}