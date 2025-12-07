#include <stdio.h>
int main() {
    char s[100];
    int i, len = 0;
    printf("Enter string: ");
    scanf("%s", s);
    for(i = 0; s[i] != '\0'; i++)
        len++;
    printf("Length = %d\n", len);
    return 0;
}