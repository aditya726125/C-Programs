#include <stdio.h>
int main() {
    int n, pos, val, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[100];
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter position (1 to %d): ", n + 1);
    scanf("%d", &pos);
    printf("Enter value: ");
    scanf("%d", &val);
    for(i = n; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = val;
    n++;
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}