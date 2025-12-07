#include <stdio.h>
int countDiv(int x) {
    int c = 0;
    for(int i = 1; i <= x; i++)
        if(x % i == 0) c++;
    return c;
}
int main() {
    int n;
    scanf("%d",&n);
    int divN = countDiv(n);
    int isHC = 1;
    for(int i = 1; i < n; i++) {
        if(countDiv(i) >= divN) {
            isHC = 0;
            break;
        }
    }
    if(isHC)
        printf("Highly composite candidate (in simple sense)");
    else
        printf("Not highly composite (simple check)");
    return 0;
}