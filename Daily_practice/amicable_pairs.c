#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);

    for(int a = 2; a <= N; a++) {
        int sumA = 0;
        for(int i = 1; i <= a/2; i++)
            if(a % i == 0)
                sumA += i;

        int b = sumA;
        if(b > a && b <= N) {  // avoid duplicates, ensure in range
            int sumB = 0;
            for(int j = 1; j <= b/2; j++)
                if(b % j == 0)
                    sumB += j;
            if(sumB == a)
                printf("(%d, %d) ", a, b);
        }
    }

    return 0;
}
