#include <stdio.h>
#include <string.h>
int main() {
    char s[100], t;
    int i, j;
    printf("Enter string: ");
    scanf("%s", s);
    i = 0;
    j = strlen(s) - 1;
    while(i < j) {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++;
        j--;
    }
    printf("Reversed = %s\n", s);
    return 0;
}