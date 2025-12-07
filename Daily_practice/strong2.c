#include <stdio.h>
long long factD(int x){
    long long f=1;
    for(int i=1;i<=x;i++) f*=i;
    return f;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    for(int n=a;n<=b;n++){
        int temp=n;
        long long sum=0;
        while(temp>0){
            int d=temp%10;
            sum += factD(d);
            temp/=10;
        }
        if(sum==n) printf("%d ",n);
    }
    return 0;
}