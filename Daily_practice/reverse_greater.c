#include <stdio.h>
int reverse(int n){
    int r=0;
    while(n>0){ r=r*10 + n%10; n/=10; }
    return r;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        if(reverse(i) > i)
            printf("%d ",i);
    return 0;
}
