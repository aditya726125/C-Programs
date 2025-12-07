#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[10][10];
    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);

    // upper diagonals + main diagonal
    for(int k=0;k<n;k++){
     i=0; j=k;
     while(i<n && j<n){
      printf("%d ",a[i][j]);
      i++; j++;
     }
     printf("\n");
    }

    // lower diagonals
    for(int k=1;k<n;k++){
     i=k; j=0;
     while(i<n && j<n){
      printf("%d ",a[i][j]);
      i++; j++;
     }
     printf("\n");
    }
    return 0;
}
