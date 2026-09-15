#include <stdio.h>

int main() {
    int a, b;
    
    // Input two numbers
    scanf("%d %d", &a, &b);
    
    // Swap without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;
    
    // Output the swapped values
    printf("After swap: %d %d\n", a, b);
    
    return 0;
}
