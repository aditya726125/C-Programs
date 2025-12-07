#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int *p = (int*)malloc(n * sizeof(int));
    if(p == NULL) {
        printf("Memory error\n");
        return 0;
    }
    for(i = 0; i < n; i++)
        scanf("%d", &p[i]);
    for(i = 0; i < n; i++)
        printf("%d ", p[i]);
    free(p);
    return 0;
}