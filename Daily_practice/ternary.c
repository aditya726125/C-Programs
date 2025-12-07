// condition ? expression if true : expression if false

#include <stdio.h>

int main()
{
    int a;
    int b;
    printf("Enter number a : ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    a > b ? printf("a is greater") : printf("b is greater");
    return 0;
}