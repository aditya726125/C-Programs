#include <stdio.h>
#include <string.h>

int main(){
    char c [20];
    int age;
    printf("Enter your citizenship: ");
    scanf("%s", &c);
    if(strcmp(c, "Indian")==0 || strcmp(c , "indian")==0)
    {
        printf("Enter your age: ");
        scanf("%d", &age);
        if(age>=18,age<=120)
        {
            printf("You are eligible to vote\n");
        }
        else{
            printf("You are not eligible to vote\n");
        }
    }
    else{
        printf("You are not eligible to vote due to citizenship\n");
    }
    return 0;
}