#include <stdio.h>
struct Student {
    char name[30];
    int roll;
    float marks;
};
void readStudent(struct Student *s) {
    printf("Enter name, roll, marks: ");
    scanf("%s %d %f", s->name, &s->roll, &s->marks);
}
void printStudent(struct Student s) {
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
}
int main() {
    struct Student s1;
    readStudent(&s1);
    printf("\nStudent details:\n");
    printStudent(s1);
    return 0;
}
