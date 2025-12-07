#include <stdio.h>
int main(){
    int n, odd=1;
    scanf("%d",&n);
    while(n > 0){
        n -= odd;
        odd += 2;
    }
    if(n == 0) printf("Perfect square");
    else printf("Not perfect square");
    return 0;
}