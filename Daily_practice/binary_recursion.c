#include <stdio.h>
int binSearch(int a[], int l, int r, int key) {
    if(l > r) return -1;
    int mid = (l + r) / 2;
    if(a[mid] == key) return mid;
    else if(key < a[mid]) return binSearch(a, l, mid - 1, key);
    else return binSearch(a, mid + 1, r, key);
}
int main() {
    int n, i, key;
    printf("Enter size (sorted array): ");
    scanf("%d", &n);
    int a[100];
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter key to search: ");
    scanf("%d", &key);
    int pos = binSearch(a, 0, n - 1, key);
    if(pos == -1) printf("Not found\n");
    else printf("Found at index %d\n", pos);
    return 0;
}