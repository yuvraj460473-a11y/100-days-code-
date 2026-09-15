#include <stdio.h>

int main() {
    int a, b, temp;
    
    // Input two numbers
    scanf("%d %d", &a, &b);
    
    // Swap using a third variable
    temp = a;
    a = b;
    b = temp;
    
    // Output the result
    printf("After swap: %d %d\n", a, b);
    
    return 0;
}
