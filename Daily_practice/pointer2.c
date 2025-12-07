#include <stdio.h>
int main() {
    int a = 10;
    int *p = &a;
    printf("a = %d\n", a);
    printf("&a = %p\n", (void*)&a);
    printf("p = %p\n", (void*)p);
    printf("*p = %d\n", *p);
    return 0;
}