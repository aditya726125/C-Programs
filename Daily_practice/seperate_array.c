#include <stdio.h>
int main() {
    int n, i, e = 0, o = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[100], even[100], odd[100];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n; i++) {
        if(a[i] % 2 == 0)
            even[e++] = a[i];
        else
            odd[o++] = a[i];
    }
    printf("Even elements:\n");
    for(i = 0; i < e; i++)
        printf("%d ", even[i]);
    printf("\nOdd elements:\n");
    for(i = 0; i < o; i++)
        printf("%d ", odd[i]);
    return 0;
}