#include <stdio.h>
long long fact(int x) {
    long long f = 1;
    int i;
    for(i = 1; i <= x; i++)
        f *= i;
    return f;
}
int main() {
    int n, temp;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    long long sum = 0;
    while(temp != 0) {
        int d = temp % 10;
        sum += fact(d);
        temp /= 10;
    }
    if(sum == n) printf("Strong number\n");
    else printf("Not Strong\n");
    return 0;
}
