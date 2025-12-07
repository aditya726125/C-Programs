#include <stdio.h>
int main(){
    int sum = 0, x;
    while(sum <= 100){
        scanf("%d",&x);
        sum += x;
    }
    printf("Stopped. Final sum = %d",sum);
    return 0;
}