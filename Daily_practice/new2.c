#include <stdio.h>
int main()
{
    int n = 10;
    system("cls");
    for(int i=0;i<n;i++)
    {
        if(i==5)
        continue;
        printf("i=%d\n",i);
    }
    return 0;
}

/*
#include <stdio.h>
int main()
{
    int n = 10;
    system("cls");
    for(int i=0;i<n;i++)
    {
        printf("Hello\n");
    }
    return 0;
}
    */