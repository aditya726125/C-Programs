#include <stdio.h>
int main() {
    int a[100], n = 0, choice, i, pos, val;
    printf("Enter initial size: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    while(1) {
        printf("\n1.Insert  2.Delete  3.Display  4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        if(choice == 1) {
            printf("Enter position (1 to %d) and value: ", n + 1);
            scanf("%d %d", &pos, &val);
            if(pos < 1 || pos > n + 1) {
                printf("Invalid position\n");
                continue;
            }
            for(i = n; i >= pos; i--)
                a[i] = a[i - 1];
            a[pos - 1] = val;
            n++;
        } else if(choice == 2) {
            printf("Enter position (1 to %d): ", n);
            scanf("%d", &pos);
            if(pos < 1 || pos > n) {
                printf("Invalid position\n");
                continue;
            }
            for(i = pos - 1; i < n - 1; i++)
                a[i] = a[i + 1];
            n--;
        } else if(choice == 3) {
            printf("Array: ");
            for(i = 0; i < n; i++)
                printf("%d ", a[i]);
            printf("\n");
        } else if(choice == 4) {
            break;
        } else {
            printf("Invalid choice\n");
        }
    }
    return 0;
}