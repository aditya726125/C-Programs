#include <stdio.h>
int main() {
    int r,c,i,j,k;
    scanf("%d %d",&r,&c);
    int a[10][10];
    scanf("%d",&k);
    for(i=0;i<r;i++)
     for(j=0;j<c;j++)
      scanf("%d",&a[i][j]);
    for(i=0;i<r;i++){
     for(j=0;j<c;j++)
      printf("%d ",a[i][j]*k);
     printf("\n");
    }
    return 0;
}