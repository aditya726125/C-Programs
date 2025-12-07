#include <stdio.h>
int main() {
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int A[10][10],B[10][10],C[10][10];
    for(i=0;i<r;i++)
     for(j=0;j<c;j++)
      scanf("%d",&A[i][j]);
    for(i=0;i<r;i++)
     for(j=0;j<c;j++)
      scanf("%d",&B[i][j]);
    for(i=0;i<r;i++)
     for(j=0;j<c;j++)
      C[i][j] = A[i][j]-B[i][j];
    for(i=0;i<r;i++){
     for(j=0;j<c;j++)
      printf("%d ",C[i][j]);
     printf("\n");
    }
    return 0;
}