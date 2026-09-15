#include <stdio.h>

int main() {
    int n;
    
    // Input value of n
    scanf("%d", &n);
    
    // Formula for sum of first n natural numbers: n * (n + 1) / 2
    int sum = n * (n + 1) / 2;
    
    // Output the result
    printf("Sum=%d\n", sum);
    
    return 0;
}
