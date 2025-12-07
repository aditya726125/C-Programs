#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int *a = (int*)malloc(n * sizeof(int));
    if(a == NULL) {
        printf("Memory error\n");
        return 0;
    }
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int max = a[0], min = a[0];
    for(i = 1; i < n; i++) {
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }
    printf("Max = %d, Min = %d\n", max, min);
    free(a);
    return 0;
}