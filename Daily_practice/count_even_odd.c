#include <stdio.h>
int main() {
    int r,c,i,j,e=0,o=0;
    scanf("%d %d",&r,&c);
    int a[10][10];
    for(i=0;i<r;i++)
     for(j=0;j<c;j++){
      scanf("%d",&a[i][j]);
      if(a[i][j]%2==0) e++; else o++;
     }
    printf("Even=%d Odd=%d",e,o);
    return 0;
}