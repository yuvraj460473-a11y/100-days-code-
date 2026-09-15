#include <stdio.h>

int main() {
    int num1, num2;
    char op;
    
    // Input format: number number operator (e.g. 4 2 +)
    scanf("%d %d %c", &num1, &num2, &op);
    
    // Perform operation using switch-case
    switch (op) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d\n", num1 / num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                printf("%d\n", num1 % num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
            break;
    }
    
    return 0;
}
