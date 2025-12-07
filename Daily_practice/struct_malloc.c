#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[30];
    int roll;
    float marks;
};
int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student *s = (struct Student*)malloc(n * sizeof(struct Student));
    if(s == NULL) {
        printf("Memory error\n");
        return 0;
    }
    float sum = 0;
    for(i = 0; i < n; i++) {
        printf("Enter name, roll, marks: ");
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
        sum += s[i].marks;
    }
    printf("\nStudent details:\n");
    for(i = 0; i < n; i++)
        printf("%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    printf("Average marks = %.2f\n", sum / n);
    free(s);
    return 0;
}