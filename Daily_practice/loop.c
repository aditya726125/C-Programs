/*
Loops:
Entry control : While , For
While loop : 
syntax - while <Boolean expresion>
{
While block statements
}
*No. of iterations unknown
For loop:
for(<initialization>; <condition>; <increment/decrement>)
{
    For block statements
}
No. of iterations known
Exit control : Do-while
*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}