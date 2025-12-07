#include <stdio.h>

char toUpper(char c) {
    if(c >= 'a' && c <= 'z')
        return c - 32;
    return c;
}

char toLower(char c) {
    if(c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    printf("Uppercase: %c\n", toUpper(c));
    printf("Lowercase: %c\n", toLower(c));

    return 0;
}
