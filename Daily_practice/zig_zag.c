#include <stdio.h>
int main() {
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int a[10][10];
    for(i=0;i<r;i++)
     for(j=0;j<c;j++)
      scanf("%d",&a[i][j]);
    for(i=0;i<r;i++){
     if(i%2==0){
      for(j=0;j<c;j++) printf("%d ",a[i][j]);
     } else{
      for(j=c-1;j>=0;j--) printf("%d ",a[i][j]);
     }
     printf("\n");
    }
    return 0;
}