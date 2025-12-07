//WAP to count the number of digit without using loop
#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf("Enter the digit: ");
    scanf("%d", &n);
    int count = (int)(log10(n))+1;
    if(n==0){
        printf("1",n);
    }
    else{
        printf("Number of digits is %d", count);
    }
    return 0;
}