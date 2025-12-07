#include <stdio.h>
int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[100];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int start = 0, end = n - 1, temp;
    while(start < end) {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }

    printf("Reversed array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}