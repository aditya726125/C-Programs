#include <stdio.h>
#include <math.h>

int main() {
    int num, a, remainder, n = 0;
    double result = 0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    a = num;
    for (a = num; a != 0; ++n) {
        a /= 10;
    }
    a = num;
    while (a != 0) {
        remainder = a % 10;
        result += pow(remainder, n);
        a /= 10;
    }

    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
