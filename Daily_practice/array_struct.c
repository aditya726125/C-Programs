#include <stdio.h>
struct Student {
    char name[30];
    int roll;
};
int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[50];
    for(i = 0; i < n; i++)
        scanf("%s %d", s[i].name, &s[i].roll);
    for(i = 0; i < n; i++)
        printf("%s %d\n", s[i].name, s[i].roll);
    return 0;
}