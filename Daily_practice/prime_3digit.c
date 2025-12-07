#include <stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(i%10 != 3) continue;
        int prime=1;
        for(int j=2;j*j<=i;j++)
            if(i%j==0) prime=0;
        if(prime) count++;
    }
    printf("Count = %d",count);
    return 0;
}