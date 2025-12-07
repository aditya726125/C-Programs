#include <stdio.h>
struct Student {
    char name[30];
    int roll;
    float marks;
};
void updateMarks(struct Student *s, float newMarks) {
    s->marks = newMarks;
}
int main() {
    struct Student s = {"Rohit", 1, 75.0f};
    printf("Before: %s %d %.2f\n", s.name, s.roll, s.marks);
    updateMarks(&s, 90.5f);
    printf("After: %s %d %.2f\n", s.name, s.roll, s.marks);
    return 0;
}