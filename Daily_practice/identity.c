#include <stdio.h>
int main() {
    int n,i,j,flag=1;
    scanf("%d",&n);
    int a[10][10];
    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
      if((i==j && a[i][j]!=1) || (i!=j && a[i][j]!=0))
        flag=0;
    if(flag) printf("Identity");
    else printf("Not Identity");
    return 0;
}