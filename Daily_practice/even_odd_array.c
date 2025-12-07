#include <stdio.h>
int main() {
    int n, i, e = 0, o = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[100];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n; i++) {
        if(a[i] % 2 == 0) e++;
        else o++;
    }
    printf("Even = %d, Odd = %d\n", e, o);
    return 0;
}