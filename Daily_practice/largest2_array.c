#include <stdio.h>
int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[100];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    if(n < 2) {
        printf("Not enough elements\n");
        return 0;
    }

    int max1 = a[0], max2 = a[0];
    for(i = 1; i < n; i++) {
        if(a[i] > max1) {
            max2 = max1;
            max1 = a[i];
        } else if(a[i] > max2 && a[i] != max1) {
            max2 = a[i];
        }
    }

    if(max1 == max2)
        printf("Second largest does not exist (all equal?)\n");
    else
        printf("Second largest = %d\n", max2);
    return 0;
}