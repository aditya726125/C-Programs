#include <stdio.h>
int main() {
    int r,c,i,j,temp;
    scanf("%d %d",&r,&c);
    int a[10][10];
    for(i=0;i<r;i++)
     for(j=0;j<c;j++)
      scanf("%d",&a[i][j]);
    for(i=0;i<r;i++){
     temp=a[i][0];
     a[i][0]=a[i][c-1];
     a[i][c-1]=temp;
    }
    for(i=0;i<r;i++){
     for(j=0;j<c;j++) printf("%d ",a[i][j]);
     printf("\n");
    }
    return 0;
}
