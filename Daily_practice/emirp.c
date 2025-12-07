#include <stdio.h>
int isPrime2(int x){
    if(x<=1) return 0;
    for(int i=2;i*i<=x;i++)
        if(x%i==0) return 0;
    return 1;
}
int main(){
    int n, rev=0, temp;
    scanf("%d",&n);
    temp=n;
    while(temp>0){
        rev = rev*10 + temp%10;
        temp/=10;
    }
    if(isPrime2(n) && isPrime2(rev) && rev!=n)
        printf("Emirp");
    else
        printf("Not Emirp");
    return 0;
}
