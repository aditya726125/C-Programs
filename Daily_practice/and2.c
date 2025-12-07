#include <stdio.h>

int main(){
    int a = 80, b = 70;
    if(a>0 && b>0){
        printf("Both a and b are positive");
    }else{ 
        printf("at least one of them is not positive");
    }
    return 0;
}