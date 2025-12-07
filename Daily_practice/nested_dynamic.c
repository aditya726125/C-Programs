#include <stdio.h>
struct Date {
    int d, m, y;
};
struct Student {
    char name[30];
    int roll;
    struct Date dob;
};
int main() {
    struct Student s;
    printf("Enter name, roll, dob (dd mm yyyy):\n");
    scanf("%s %d %d %d %d", s.name, &s.roll, &s.dob.d, &s.dob.m, &s.dob.y);
    printf("Name: %s\nRoll: %d\nDOB: %02d-%02d-%04d\n",
           s.name, s.roll, s.dob.d, s.dob.m, s.dob.y);
    return 0;
}