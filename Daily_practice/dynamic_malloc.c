#include <stdio.h>
#include <stdlib.h>
int main() {
    int r, c, i, j;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);

    int **a = (int**)malloc(r * sizeof(int*));
    if(a == NULL) {
        printf("Memory error\n");
        return 0;
    }
    for(i = 0; i < r; i++) {
        a[i] = (int*)malloc(c * sizeof(int));
        if(a[i] == NULL) {
            printf("Memory error\n");
            return 0;
        }
    }

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Matrix is:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    for(i = 0; i < r; i++)
        free(a[i]);
    free(a);
    return 0;
}