#include <stdio.h>
int main() {
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    int a[10][10];
    for(i=0;i<r;i++)
     for(j=0;j<c;j++)
      scanf("%d",&a[i][j]);

    printf("Row sums:\n");
    for(i=0;i<r;i++){
     int s=0;
     for(j=0;j<c;j++) s+=a[i][j];
     printf("%d\n",s);
    }

    printf("Column sums:\n");
    for(j=0;j<c;j++){
     int s=0;
     for(i=0;i<r;i++) s+=a[i][j];
     printf("%d\n",s);
    }
    return 0;
}