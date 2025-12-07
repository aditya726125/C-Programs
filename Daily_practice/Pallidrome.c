#include <stdio.h>
int main(){
int n , r=0;
printf("Enter the number : ");
scanf("%d", &n);
int temp = n;
while(n){
    r = r*10+ n%10 ;
    n = n/10;
}
printf("Rev number is %d\n", r);
if(r==temp)
{
    printf("Pallidrome\n");
}
else{
    printf("Not Pallidrome\n");
}
return 0 ;
}