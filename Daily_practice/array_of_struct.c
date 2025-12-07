#include <stdio.h>
struct Student {
    char name[30];
    int roll;
    float marks;
};
int main() {
    int n, i, roll, found = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[50];
    for(i = 0; i < n; i++) {
        printf("Enter name, roll, marks: ");
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }
    printf("Enter roll to search: ");
    scanf("%d", &roll);
    for(i = 0; i < n; i++) {
        if(s[i].roll == roll) {
            printf("Found: %s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
            found = 1;
            break;
        }
    }
    if(!found) printf("Student not found\n");
    return 0;
}