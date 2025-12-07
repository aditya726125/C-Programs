#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, len = 0;
    printf("Enter max length of string: ");
    scanf("%d", &n);
    char *s = (char*)malloc((n + 1) * sizeof(char));
    if(s == NULL) {
        printf("Memory error\n");
        return 0;
    }
    printf("Enter string (no spaces): ");
    scanf("%s", s);
    for(i = 0; s[i] != '\0'; i++)
        len++;
    printf("You entered: %s\nLength = %d\n", s, len);
    free(s);
    return 0;
}