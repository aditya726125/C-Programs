#include <stdio.h>
int main() {
    int r,c,i,j,temp;
    scanf("%d %d",&r,&c);
    int a[10][10];
    for(i=0;i<r;i++)
     for(j=0;j<c;j++)
      scanf("%d",&a[i][j]);
    for(i=0;i<r;i++){
     int l=0, h=c-1;
     while(l<h){
      temp=a[i][l];
      a[i][l]=a[i][h];
      a[i][h]=temp;
      l++; h--;
     }
    }
    for(i=0;i<r;i++){
     for(j=0;j<c;j++)
      printf("%d ",a[i][j]);
     printf("\n");
    }
    return 0;
}
