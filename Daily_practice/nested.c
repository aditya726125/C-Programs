#include <stdio.h>

int main(){
    int age, citizenship;
    printf("If you are an Indian enter 1, if not enter 0: ");
    scanf("%d", &citizenship);
    if(citizenship==0)
    {
        printf("You are not eligible to vote due to citizenship");
    }
    if(citizenship==1)
    {
        printf("Enter your age: \n");
        scanf("%d", &age);
     if(age>=18)
     {
        printf("You are eligible to vote");
     }
     if(age<18)
     {
        printf("You are not eligible to vote");
     }
    }
    return 0;
}