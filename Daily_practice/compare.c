#include <stdio.h>
int main(){
    char str1[100], str2[100];
    int i , n = 0;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    for(i = 0; str1[i] != '\0' || str2[i] != '\0'; i++){
        if(str1[i] != str2[i]){
            n = 1;
            break;
        }
    }
    if(n == 0){
        printf("Strings are equal\n");
    }
    else{
        printf("Strings are not equal\n");
    }
    return 0;
}