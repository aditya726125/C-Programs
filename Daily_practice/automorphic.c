#include <stdio.h>
int main() {
    int n, sq, temp;
    scanf("%d", &n);
    sq = n * n;
    temp = n;
    while (temp > 0) {
        if (temp % 10 != sq % 10) {
            printf("Not Automorphic");
            return 0;
        }
        temp /= 10;
        sq /= 10;
    }
    printf("Automorphic");
    return 0;
}