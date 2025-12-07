#include <stdio.h>
int main() {
    int n, i, j, flag = 1;
    printf("Enter size (n x n): ");
    scanf("%d", &n);
    int a[10][10];
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for(i = 1; i < n; i++) {
        for(j = 0; j < i; j++) {
            if(a[i][j] != 0) {
                flag = 0;
                break;
            }
        }
        if(!flag) break;
    }
    if(flag) printf("Upper triangular matrix\n");
    else printf("Not upper triangular\n");
    return 0;
}