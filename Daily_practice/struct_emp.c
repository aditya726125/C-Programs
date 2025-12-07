#include <stdio.h>
struct Employee {
    char name[30];
    int id;
    float salary;
};
int main() {
    int n, i;
    float limit;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct Employee e[50];
    for(i = 0; i < n; i++) {
        printf("Enter name, id, salary: ");
        scanf("%s %d %f", e[i].name, &e[i].id, &e[i].salary);
    }
    printf("Enter salary limit: ");
    scanf("%f", &limit);
    printf("Employees with salary > %.2f:\n", limit);
    for(i = 0; i < n; i++) {
        if(e[i].salary > limit)
            printf("%s %d %.2f\n", e[i].name, e[i].id, e[i].salary);
    }
    return 0;
}
