#include <stdio.h>

int main()
{
    int rows;
    char ch = 'A';
    printf("Enter Number of rows: ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c", ch++);
        }
        printf("\n");
    }
    return 0;
}