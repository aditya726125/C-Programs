#include <stdio.h>
int main(){
    int n,max=0;
    scanf("%d",&n);
    while(n>0){
        int d=n%10;
        if(d>max) max=d;
        n/=10;
    }
    printf("%d",max);
    return 0;
}