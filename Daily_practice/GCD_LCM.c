//WAP to calculate GCD and LCM of two numbers
#include <stdio.h>
int main(){
    int a , b ;
    printf("Enter the number: ");
    scanf("%d", &a);
    printf("Enter the number: ");
    scanf("%d", &b);
    int gcd, lcm;
    for(int i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    lcm = (a*b)/gcd;
    printf("GCD of %d and %d is %d\n", a, b, gcd);
    printf("LCM of %d and %d is %d", a, b, lcm);
    return 0;
}