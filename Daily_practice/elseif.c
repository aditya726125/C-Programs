#include <stdio.h>

int main(){
    int x = 0;
    if(x>0)
    {
    printf("Number %d is positive",x);
    }
    else if(x<0)
    {
        printf("Number %d is negative",x);
    }
    else
    {
        printf("Number %d is zero",x);
    }
    return 0;
}