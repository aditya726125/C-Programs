/*Structure- collection of heterogeneous elements,It is a user defined datatype in C programming.
Syntax:
      struct structure_name
      {
        member 1;
        .
        .
        .
        member n;
      };
e.g. Structure for Student -- Name , Age , Mobile
    struct student
    {
    char name[50];
    int agea;
    long mobile;
    };

**Things to remember:
1. You must have to terminate the structure with a semi-colon.
2. You can't assign value to structure member during declarations.
3. You can declare structure anywhere like global or local.
4. You can declare the structure member as an another structure.
[
struct address          struct student
{                       {
int hno;                 char name[40];
char gali[10];           long mobile;
char PO[10];             struct address;
long pin;               };
}
]

**How to create structure object or structure variable?
Two ways:
1. Along with structure definition.
2. After structure definition.

Example:
1.
struct student
{
int age;
float temp;
}st1;

2.
struct student st2;

Data type - Primitive , Drive

&age --> st1.age (dot operator)
st1 -> age (arrow operator)

*/

#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[40];
    int age;
    unsigned long mobile;
};

int main()
{
    struct student st1;

    struct student *st2;
    st2 = (struct student *)malloc(sizeof(struct student));
    printf("Enter student name:");
    fgets(st1.name, 40, stdin);
    printf("Enter the age:");
    scanf("%d", &st1.age);
    printf("Enter mobile number:");
    scanf("%lu", &st1.mobile);

    printf("Using simple structure variable\n");
    printf("student name : %s\n", st1.name);
    printf("student age : %d\n", st1.age);
    printf("student number : %lu\n", st1.mobile);
}