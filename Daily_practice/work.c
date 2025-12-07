//WAP to swap first and last digits
//WAP to print multiplication table of given number
#include <stdio.h>

#include <stdio.h>

int main() {
    int a, i;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Multiplication Table of %d:\n", a);
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", a, i, a * i);
    }
    return 0;
}