/*
2D array -- Matrix
WAP to insert the element in 2d array and print in matrix form
WAP to multiply the scalar value into matrix
*/
/*
#include <stdio.h>
int main()
{
    int row, col;
    printf("Enter number of rows:");
    scanf("%d", &row);
    printf("Enter number of columns:");
    scanf("%d",&col);
    int arr[10][10];
    printf("Enter elements of the matrix:\n");
    for (int i = 0;
         i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", arr[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (int i = 0;i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

/*WAP to multiply the scalar value into matrix*/
#include <stdio.h>
int main()
{
    int row, col, scalar;
    printf("Enter number of rows:");
    scanf("%d", &row);
    printf("Enter number of columns:");
    scanf("%d", &col);
    int arr[10][10];
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the scalar value to multiply:");
    scanf("%d", &scalar);
    printf("The resultant matrix after multiplication is:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = arr[i][j] * scalar;
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
