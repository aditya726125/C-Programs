#include <stdio.h>
int* maxPtr(int a[], int n) {
    int i, *maxp = &a[0];
    for(i = 1; i < n; i++)
        if(a[i] > *maxp) maxp = &a[i];
    return maxp;
}
int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[100];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int *p = maxPtr(a, n);
    printf("Max = %d (address %p)\n", *p, (void*)p);
    return 0;
}