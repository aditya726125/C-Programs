/*
Function in C programming -- Collection of statement used to perform a specific task.
1. Reuseability
2. Modular Design
3. Abstraction

Syntax: return_type function_name(parameter_list){                //parameter_list is optional
    //body of function
    return;                                                       // return is optional if return_type is void
    }

**Two types of functions:
1. Library functions
2. User-defined functions

**User-defined functions:
1. Function with return type and with argument list
2. Function with return type and without argument list
3. Function without return type and with argument list
4. Function without return type and without argument list

1. Call by value
2. Call by reference
*/
//WAP to swap two numbers using function. call by value
#include <stdio.h>
void swap(int a, int b){               //function declaration
    int temp;
    printf("Before swapping a: %d, b: %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping inside function: a : %d, b : %d\n", a, b);
}
int main(){
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    swap(a, b);                         //function call
    printf("After swapping inside main function: a : %d, b : %d\n", a, b);
    return 0;
}