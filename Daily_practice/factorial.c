//WAP to print the factorial of given number
#include <stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    double b = 1;
    for(int i = 1; i <= a; i++){
        b = b * i;
    }
    printf("Factorial of %d is %.2f",a , b);
    return 0;
}