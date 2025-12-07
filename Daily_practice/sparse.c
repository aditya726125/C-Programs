#include <stdio.h>
int main() {
    int r, c, i, j, zero = 0;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    int a[10][10];
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j] == 0) zero++;
        }
    int total = r * c;
    if(zero > total / 2) printf("Sparse matrix\n");
    else printf("Not sparse\n");
    return 0;
}