#include <stdio.h>

int main()
{
    int income;
    float tax1, tax2, tax3;
    printf("Enter your income(in lakhs) : ");
    scanf("%d", &income);
    if (income >= 250000 && income <= 500000)
    {
        tax1 = 0.05 * (income - 250000);
        printf("Tax paid is : %.2f", tax1);
    }
    else if (income >= 500000 && income <= 1000000)
    {
        tax2 = 0.1 * (income - 500000);
        printf("Tax paid is : %.2f", tax2);
    }
    else if (income > 1000000)
    {
        tax3 = 0.2 * (income - 1000000);
        printf("Tax paid is : %.2f", tax3);
    }
    else
    {
        printf("No tax paid");
    }
    return 0;
}