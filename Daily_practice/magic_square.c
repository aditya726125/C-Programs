#include <stdio.h>
int main() {
    int n,i,j,sum,diag1=0,diag2=0;
    scanf("%d",&n);
    int a[10][10],row[n],col[n];

    for(i=0;i<n;i++){
     row[i]=0; col[i]=0;
    }

    for(i=0;i<n;i++)
     for(j=0;j<n;j++){
      scanf("%d",&a[i][j]);
      row[i]+=a[i][j];
      col[j]+=a[i][j];
     }

    for(i=0;i<n;i++){
     diag1+=a[i][i];
     diag2+=a[i][n-1-i];
    }

    int magic = row[0];
    for(i=0;i<n;i++)
     if(row[i]!=magic || col[i]!=magic){
      printf("Not magic"); return 0;
     }

    if(diag1==magic && diag2==magic) printf("Magic square");
    else printf("Not magic");
    return 0;
}
