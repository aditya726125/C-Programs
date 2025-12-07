#include <stdio.h>
int main() {
    int n, i, j, count;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[100], visited[100] = {0};
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < n; i++) {
        if(visited[i] == 1) continue;
        count = 1;
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                count++;
                visited[j] = 1;
            }
        }
        printf("%d occurs %d times\n", a[i], count);
    }
    return 0;
}