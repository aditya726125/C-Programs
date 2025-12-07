#include <stdio.h>
int main() {
    int r,c,i,j,temp;
    scanf("%d %d",&r,&c);
    int a[10][10];
    for(i=0;i<r;i++)
     for(j=0;j<c;j++)
      scanf("%d",&a[i][j]);
    for(j=0;j<c;j++){
     int top=0,bottom=r-1;
     while(top<bottom){
      temp=a[top][j];
      a[top][j]=a[bottom][j];
      a[bottom][j]=temp;
      top++; bottom--;
     }
    }
    for(i=0;i<r;i++){
     for(j=0;j<c;j++)
      printf("%d ",a[i][j]);
     printf("\n");
    }
    return 0;
}