#include <stdio.h>
int main(){
    char grade;
    int n;
    printf("Enter the marks: ");
    scanf("%d", &n);
    if(n<=100 && n>=90){
        printf("grade = %c",'A');
    }
    else if(n<90 && n>=80){
        printf("grade = %c",'B');
    }
    else if(n<80 && n>=70){
        printf("grade = %c",'C');
    }
    else if(n<70 && n>=60){
        printf("grade = %c",'D');
    }
    else if(n<60 && n>=50){
        printf("grade = %c",'E');
    }
    else{
        printf("grade = %c",'F');
    }   
    return 0;
}