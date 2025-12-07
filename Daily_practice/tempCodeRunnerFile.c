#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;          // integer pointer
    char *q;         // char pointer
    int n = 5;       // integer variable

    // --------- malloc (allocate memory for 5 integers) ---------
    p = (int*)malloc(n * sizeof(int));

    printf("Using malloc:\n");
    for(int i = 0; i < n; i++) {
        p[i] = i + 1;
        printf("%d ", p[i]);
    }
    printf("\n");

    // --------- calloc (allocate memory for 5 characters) ---------
    q = (char*)calloc(5, sizeof(char));

    printf("\nUsing calloc (initially all zeros):\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", q[i]);  // prints 0 0 0 0 0
    }
    printf("\n");

    // --------- realloc (increase memory of p from 5 ints to 8 ints) ---------
    p = (int*)realloc(p, 8 * sizeof(int));

    printf("\nAfter realloc (expanded to 8 ints):\n");
    for(int i = 0; i < 8; i++) {
        p[i] = i + 10;   // fill new values
        printf("%d ", p[i]);
    }
    printf("\n");

    // --------- free memory ---------
    free(p);
    free(q);

    printf("\nMemory Freed Successfully!");

    return 0;
}