#include <stdio.h>
int main(){
    int r,c,i,startRow=0,startCol=0;
    scanf("%d %d",&r,&c);
    int a[10][10], endRow=r-1, endCol=c-1;
    for(i=0;i<r;i++)
     for(int j=0;j<c;j++)
      scanf("%d",&a[i][j]);
    while(startRow<=endRow && startCol<=endCol){
     for(i=startCol;i<=endCol;i++) printf("%d ",a[startRow][i]);
     startRow++;
     for(i=startRow;i<=endRow;i++) printf("%d ",a[i][endCol]);
     endCol--;
     if(startRow<=endRow){
      for(i=endCol;i>=startCol;i--) printf("%d ",a[endRow][i]);
      endRow--;
     }
     if(startCol<=endCol){
      for(i=endRow;i>=startRow;i--) printf("%d ",a[i][startCol]);
      startCol++;
     }
    }
    return 0;
}