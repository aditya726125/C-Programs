//WAP to print fibanocci serires
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int a = 0, b = 1;
    printf("Fibanocci series: \n");
    for(int i=1; i<=n; i++){
        printf("%d\n", a);
        int c = a + b;
        a = b;
        b = c;
    }
    return 0;
}