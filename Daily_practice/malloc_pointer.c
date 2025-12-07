#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int *p = (int*)malloc(n * sizeof(int));
    if(p == NULL) {
        printf("Memory allocation failed\n");
        return 0;
    }
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &p[i]);
    int sum = 0;
    for(i = 0; i < n; i++)
        sum += p[i];
    printf("Sum = %d, Average = %.2f\n", sum, (float)sum / n);
    free(p);
    return 0;
}