#include <stdio.h>
int main(){
    for(int n=100;n<=999;n++){
        int a=n/100, b=(n/10)%10, c=n%10;
        if((a+b+c)%2==0)
            printf("%d ",n);
    }
    return 0;
}