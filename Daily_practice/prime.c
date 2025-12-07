#include <stdio.h>

int main()
{
    int n , sum = 0;
    printf("Enter the limit: ");
    scanf("%d", &n);
    for(int i=2 ; i<=n ; i++)
    {
        int a = 1;
        for(int j = 2; j*j<=i; j++)
        if (i%j==0)
        {
         a=0;
         break;
        }
        sum+= a?i:0;
    }
    printf("Sum of prime numbers upto %d = %d\n", n , sum);
   return 0 ;
}