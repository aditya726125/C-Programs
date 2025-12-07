#include <stdio.h>
int main() {
    int n1, n2, i, j, k;
    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);
    int a[100];
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);
    int b[100];
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    int c[200];
    i = j = k = 0;
    while(i < n1 && j < n2) {
        if(a[i] <= b[j]) c[k++] = a[i++];
        else c[k++] = b[j++];
    }
    while(i < n1) c[k++] = a[i++];
    while(j < n2) c[k++] = b[j++];

    printf("Merged sorted array:\n");
    for(i = 0; i < k; i++)
        printf("%d ", c[i]);
    return 0;
}