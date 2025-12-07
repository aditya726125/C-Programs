#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    for(int n=a;n<=b;n++){
        int temp=n, sum=0;
        while(temp>0){
            sum += temp%10;
            temp/=10;
        }
        if(sum!=0 && n%sum==0)
            printf("%d ",n);
    }
    return 0;
}
