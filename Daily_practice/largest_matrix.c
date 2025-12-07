#include <stdio.h>
int main() {
    int r,c,i,j,max;
    scanf("%d %d",&r,&c);
    int a[10][10];
    for(i=0;i<r;i++)
     for(j=0;j<c;j++)
      scanf("%d",&a[i][j]);
    max=a[0][0];
    for(i=0;i<r;i++)
     for(j=0;j<c;j++)
      if(a[i][j]>max) max=a[i][j];
    printf("Max = %d",max);
    return 0;
}
