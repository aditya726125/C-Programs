#include <stdio.h>
int main() {
    int r,c,i,j,min;
    scanf("%d %d",&r,&c);
    int a[10][10];
    for(i=0;i<r;i++)
     for(j=0;j<c;j++)
      scanf("%d",&a[i][j]);
    min=a[0][0];
    for(i=0;i<r;i++)
     for(j=0;j<c;j++)
      if(a[i][j]<min) min=a[i][j];
    printf("Min = %d",min);
    return 0;
}