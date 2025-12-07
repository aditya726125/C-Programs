#include <stdio.h>
struct Student {
    char name[30];
    int roll;
    float marks;
};
int main() {
    int n, i, j;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[50], temp;
    for(i = 0; i < n; i++) {
        printf("Enter name, roll, marks: ");
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(s[j].marks < s[j + 1].marks) {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    printf("Students sorted by marks (high to low):\n");
    for(i = 0; i < n; i++)
        printf("%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    return 0;
}