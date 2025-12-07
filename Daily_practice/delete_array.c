#include <stdio.h>
int main() {
    int n, pos, i;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[100];
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter position to delete (1 to %d): ", n);
    scanf("%d", &pos);
    for(i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}