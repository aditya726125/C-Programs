#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, m, i;
    printf("Enter initial size: ");
    scanf("%d", &n);
    int *a = (int*)malloc(n * sizeof(int));
    if(a == NULL) {
        printf("Memory error\n");
        return 0;
    }
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter how many more elements to add: ");
    scanf("%d", &m);
    a = (int*)realloc(a, (n + m) * sizeof(int));
    if(a == NULL) {
        printf("Realloc failed\n");
        return 0;
    }
    printf("Enter %d more elements:\n", m);
    for(i = n; i < n + m; i++)
        scanf("%d", &a[i]);
    printf("Final array:\n");
    for(i = 0; i < n + m; i++)
        printf("%d ", a[i]);
    free(a);
    return 0;
}
