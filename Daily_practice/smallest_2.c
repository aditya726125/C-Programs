#include <stdio.h>
int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    if(n < 2) {
        printf("Not enough elements\n");
        return 0;
    }
    int a[100];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int min1 = a[0], min2 = a[0];
    for(i = 1; i < n; i++) {
        if(a[i] < min1) {
            min2 = min1;
            min1 = a[i];
        } else if(a[i] < min2 && a[i] != min1) {
            min2 = a[i];
        }
    }
    if(min1 == min2)
        printf("Second smallest does not exist (all equal?)\n");
    else
        printf("Second smallest = %d\n", min2);
    return 0;
}
