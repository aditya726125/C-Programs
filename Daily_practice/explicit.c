//Write a program to print the ASCII value of given characters
#include <stdio.h>

int main(){
    char c;
    scanf("%c",&c);
    int m = (int)c;
    printf("The character is %c and ascii value is %d",c,m);
    return 0;
}