/*
Memory allocation:

1. Compile Time - Static/Stack memory allocation(no memory modification)
i. Use storage classes - Static,Auto,Register
(No library functions required)
Disadvantage:
i. Memory wastage
ii. No flexibility
iii. No control

2. Run time - Dynamic/Heap memory allocation(memory modification)
(Library functions used for runtime memory allocation)
Four Library function used - malloc() , calloc() , realloc() , free()

I. Malloc()
Syntax: void* malloc(number of bytes)              (void* - void pointer(Generic pointer) - type casting)

II. Calloc() - Memory allocates in continous way , multiple blocks are allocated and each block is initialized with zero.
Syntax: void*calloc(Number of block,Number of bytes)
        int *ptr;
        ptr = (int*)calloc(n,size)

III. Realloc()
Syntax: void*realloc(pointer variable,updated size of memory)

IV. Free() - free unused memory.
Syntax: free(ptr);

WAP using two or three variables like char , int using malloc, calloc, realloc and free
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p;
    char *q;
    int n = 5;

    p = (int*)malloc(n*sizeof (int));
    printf("Malloc\n");
    for(int i = 0 ; i<5 ; i++){
        p[i]= i+1;
        printf("%d ", p[i]);
    }
    printf("\n");

    q = (char*)calloc(5,sizeof (char));
    printf("Calloc\n");
    for(int i = 0 ; i<5 ; i++){
        printf("%d ", q[i]);
    }
    printf("\n");

    p = (int*)realloc(p,8*sizeof(int));
    printf("After Realloc (expanded to 8 ints)\n");
    for(int i = 0; i<8 ; i++){
        p[i] = i+10;
        printf("%d ", p[i]);
    }
    printf("\n");

    free(p);
    free(q);
    printf("\nMemory Freed Successfully!");
    return 0;
}
