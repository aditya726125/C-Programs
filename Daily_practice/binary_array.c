#include <stdio.h>
int main() {
    int n, i, key;
    printf("Enter size (sorted array): ");
    scanf("%d", &n);
    int a[100];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter key: ");
    scanf("%d", &key);
    int l = 0, r = n - 1, mid, pos = -1;
    while(l <= r) {
        mid = (l + r) / 2;
        if(a[mid] == key) {
            pos = mid;
            break;
        } else if(key < a[mid]) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    if(pos == -1) printf("Not found\n");
    else printf("Found at index %d\n", pos);
    return 0;
}