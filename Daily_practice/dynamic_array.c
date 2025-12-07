#include <stdio.h>
#include <stdlib.h>
struct Student {
    char name[30];
    int roll;
    float marks;
};
int main() {
    int n, i, topperIndex = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student *s = (struct Student*)malloc(n * sizeof(struct Student));
    if(s == NULL) {
        printf("Memory error\n");
        return 0;
    }
    for(i = 0; i < n; i++) {
        printf("Enter name, roll, marks: ");
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
        if(s[i].marks > s[topperIndex].marks)
            topperIndex = i;
    }
    printf("\nTopper:\n");
    printf("%s %d %.2f\n", s[topperIndex].name, s[topperIndex].roll, s[topperIndex].marks);
    free(s);
    return 0;
}
