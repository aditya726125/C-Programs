#include <stdio.h>
void tower(int n, char from, char aux, char to) {
    if(n == 0) return;
    tower(n - 1, from, to, aux);
    printf("Move disk %d from %c to %c\n", n, from, to);
    tower(n - 1, aux, from, to);
}
int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);
    tower(n, 'A', 'B', 'C');
    return 0;
}
