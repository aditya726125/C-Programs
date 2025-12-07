#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int sumA = 0, sumB = 0;

    for(int i = 1; i <= a/2; i++)
        if(a % i == 0)
            sumA += i;

    for(int i = 1; i <= b/2; i++)
        if(b % i == 0)
            sumB += i;

    if(sumA == b && sumB == a && a != b)
        printf("Amicable pair");
    else
        printf("Not amicable");

    return 0;
}