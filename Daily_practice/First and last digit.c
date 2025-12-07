//WAP to print first and last digit
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int x=n%10;
    while(n>=10){
        n=n/10;
    }
    printf("First digit is %d\n", n);
    printf("Last digit is %d",x );
    return 0;
}