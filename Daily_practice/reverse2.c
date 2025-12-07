//WAP to reverse the string
#include <stdio.h>

int main()
{
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '\n')
            break;
        length++;
    }

    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}
