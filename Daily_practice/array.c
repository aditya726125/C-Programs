/*Array -- Collection of homogeneous elements and it used to store multiple values in a single variable.
**indexing , needs continous space , constant size
int a[size];
int takes 4 bytes so int a[10]; -- 10*4=40 bytes

// WAP to enter array elements and display these elements

#include <stdio.h>
// Macro
#define PI 3.14
#define MAXSIZE 100
int main()
{
    int size;
    int a[MAXSIZE];
    printf("Enter the size:");
    scanf("%d", &size);
    printf("Enter %d elements:", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
}
*/
// How to insert a value in an array at a given position
/*
#include <stdio.h>
#define MAXSIZE 100
int main()
{
    int size, pos, val;
    int a[MAXSIZE];
    printf("Enter the size:");
    scanf("%d", &size);
    printf("Enter %d elements:", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the position to insert:");
    scanf("%d", &pos);
    printf("Enter the value to insert:");
    scanf("%d", &val);
    //shift elements to right
    for (int i = size - 1; i >= pos - 1; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos - 1] = val; //insert value at position
    size++;           //increase size
    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
}
*/


/*{size=5
int arr[size]}
10| 11| 12| 13| 14|
*/
/*
WAP to delete element from array
Delete -- By Element or By Position
1. By Element

for(i=0;i<size;i++)
{
    if(a[i]==val)
    {
        pos=i;
        break;
    }
}
2. By Position

if(pos<0 || pos>size)
    {
        printf("Invalid Position");
    }
    else
    {
        for(i=pos;i<size;i++)
        {
            a[i]=a[i+1];
        }
        size--;
}
#include <stdio.h>
*/

/*
WAP to count even and odd number in an array
WAP to print minimum and maximum number in an array
*/

/*WAP to print second largest element of an array*/

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
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (int i = 0;i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}