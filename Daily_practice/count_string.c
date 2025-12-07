#include <stdio.h>
int main() {
    char s[200];
    int i, v = 0, c = 0;
    printf("Enter a word: ");
    scanf("%s", s);
    for(i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if(ch >= 'A' && ch <= 'Z') ch = ch + 32;
        if(ch >= 'a' && ch <= 'z') {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
            else c++;
        }
    }
    printf("Vowels = %d, Consonants = %d\n", v, c);
    return 0;
}