#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    for(int n = 1; n <= N; n++) {
        int sum = 0;
        for(int i = 1; i <= n/2; i++)
            if(n % i == 0)
                sum += i;
        if(sum > n)
            printf("%d ", n);
    }
    return 0;
}
