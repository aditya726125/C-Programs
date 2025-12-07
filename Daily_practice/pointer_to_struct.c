#include <stdio.h>
struct Point {
    int x, y;
};
int main() {
    struct Point p = {5, 7};
    struct Point *ptr = &p;
    printf("x = %d, y = %d\n", ptr->x, ptr->y);
    ptr->x = 10;
    ptr->y = 20;
    printf("After change: x = %d, y = %d\n", p.x, p.y);
    return 0;
}
