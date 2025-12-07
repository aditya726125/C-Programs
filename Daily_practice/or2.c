#include <stdio.h>

int main() {
    int a = 0;
    int b = 69;

    if (a || b) {
        printf("At least one is true\n");
    } else {
        printf("Both are false\n");
    }

    return 0;
}