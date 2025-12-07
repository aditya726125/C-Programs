#include <stdio.h>

int main(){
    int age , citizenship;
    printf("If you are an Indian enter 1, if not enter 0: ");
    scanf("%d", &citizenship);
    if(citizenship==1)
    {
        printf("Enter your age: ");
        scanf("%d" , &age);
        if(age>=18 && age<=120)
        {
            printf("You are eligible to vote");
        }
        else
        {
            printf("You are not eligible to vote");
        }
    }
    else{
        printf("You are not eligible to vote due to citizenship");
    }
    return 0;
}