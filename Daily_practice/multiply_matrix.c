#include <stdio.h>
int main() {
    int r1, c1, r2, c2, i, j, k;
    printf("Enter r1 c1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter r2 c2: ");
    scanf("%d %d", &r2, &c2);
    if(c1 != r2) {
        printf("Not possible\n");
        return 0;
    }
    int A[10][10], B[10][10], C[10][10];
    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);
    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);
    for(i = 0; i < r1; i++)
        for(j = 0; j < c2; j++) {
            C[i][j] = 0;
            for(k = 0; k < c1; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}