#include <stdio.h>
#include <string.h>
int isPal(char s[], int l, int r) {
    if(l >= r) return 1;
    if(s[l] != s[r]) return 0;
    return isPal(s, l + 1, r - 1);
}
int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);
    int len = strlen(s);
    if(isPal(s, 0, len - 1)) printf("Palindrome string\n");
    else printf("Not palindrome\n");
    return 0;
}