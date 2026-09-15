#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input two numbers
    scanf("%d %d", &num1, &num2);
    
    // Check to avoid division by zero
    if (num2 != 0) {
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", 
               num1 + num2, 
               num1 - num2, 
               num1 * num2, 
               num1 / num2);
    }
    
    return 0;
}
