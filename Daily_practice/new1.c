/*task to write a program for ladder IF
Write a program to calculate the total salary of employees
TS=BS+DA+TA - HRA
if salary<35000 then DA is 2% of BS
TA is 4% of BS
*/
#include <stdio.h>

int main()
{
  int BS;
  float TS, DA, TA, HRA;
  printf("Enter BS: ");
  scanf("%d", &BS);

  if (BS < 35000)
  {
    DA = 2.0 / 100.0 * BS;
    TA = 3.0 / 100.0 * BS;
    HRA = 4.0 / 100.0 * BS;
    TS = BS + DA + TA - HRA;
    printf("DA is : %.2f\n", DA);
    printf(" TA is : %.2f\n", TA);
    printf("HRA is : %.2f\n", HRA);
    printf("Total Salary of employee is %.2f", TS);
  }
  if (BS >= 35000 && BS < 80000)
  {
    DA = 3.0 / 100.0 * BS;
    TA = 4.0 / 100.0 * BS;
    HRA = 7.0 / 100.0 * BS;
    TS = BS + DA + TA - HRA;
    printf("DA is : %.2f\n", DA);
    printf("TA is : %.2f\n", TA);
    printf("HRA is : %.2f\n", HRA);
    printf("Total Salary of employee is %.2f", TS);
  }
  if (BS >= 80000)
  {
    DA = 4.0 / 100.0 * BS;
    TA = 6.0 / 100.0 * BS;
    HRA = 9.0 / 100.0 * BS;
    TS = BS + DA + TA - HRA;
    printf("DA is : %.2f\n", DA);
    printf("TA is : %.2f\n", TA);
    printf("HRA is : %.2f\n", HRA);
    printf("Total Salary of employee is %.2f", TS);
  }
  return 0;
}