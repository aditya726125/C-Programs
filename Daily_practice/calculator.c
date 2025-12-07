#include <stdio.h>
int main() {
    char op;
    int a, b;
    printf("Enter a, operator, b (e.g. 5 + 3): ");
    scanf("%d %c %d", &a, &op, &b);
    switch(op) {
        case '+': printf("Result = %d\n", a + b); break;
        case '-': printf("Result = %d\n", a - b); break;
        case '*': printf("Result = %d\n", a * b); break;
        case '/': 
            if(b != 0) printf("Result = %d\n", a / b);
            else printf("Division by zero!\n");
            break;
        default: printf("Invalid operator\n");
    }
    return 0;
}