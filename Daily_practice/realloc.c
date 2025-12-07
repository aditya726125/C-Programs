#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    printf("Enter initial size: ");
    scanf("%d", &n);
    int *p = (int*)malloc(n * sizeof(int));
    for(i = 0; i < n; i++)
        scanf("%d", &p[i]);
    printf("Enter new size: ");
    scanf("%d", &n);
    p = (int*)realloc(p, n * sizeof(int));
    for(i = 0; i < n; i++)
        scanf("%d", &p[i]);
    for(i = 0; i < n; i++)
        printf("%d ", p[i]);
    free(p);
    return 0;
}