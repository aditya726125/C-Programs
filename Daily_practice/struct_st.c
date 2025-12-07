#include <stdio.h>
struct Student {
    char name[30];
    int roll;
    float m1, m2, m3, total, avg;
};
int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[50];
    for(i = 0; i < n; i++) {
        printf("Enter name, roll, marks in 3 subjects: ");
        scanf("%s %d %f %f %f", s[i].name, &s[i].roll, &s[i].m1, &s[i].m2, &s[i].m3);
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].avg = s[i].total / 3.0f;
    }
    printf("\nResult:\n");
    for(i = 0; i < n; i++)
        printf("%s %d Total=%.2f Avg=%.2f\n", s[i].name, s[i].roll, s[i].total, s[i].avg);
    return 0;
}