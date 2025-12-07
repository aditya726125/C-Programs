#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int *a = (int*)calloc(n, sizeof(int));
    if(a == NULL) {
        printf("Memory error\n");
        return 0;
    }
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int sum = 0;
    for(i = 0; i < n; i++)
        sum += a[i];
    printf("Average = %.2f\n", (float)sum / n);
    free(a);
    return 0;
}
