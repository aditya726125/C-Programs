#include <stdio.h>

int main(){
    int var = 20;  //actual variable declaration
    int *ptr;      //pointer variable declaration

    ptr = &var;    //store address of var in pointer variable

    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", &var);
    printf("Value stored in ptr (address of var): %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);

    return 0;
}

/*Recursive function: 1. Direct Recursion 2. Indirect Recursion
Linear recursion , Non-linear recursion , Binary recursion , Multiple recursion

int test1()
{
    test2()
}

int test2()
{
    test1()
}

**Storage classes in C:**
**auto, register, static, extern**
*/

//int main() - can accept any parameters
//int main(void) -- can't accept any parameters
