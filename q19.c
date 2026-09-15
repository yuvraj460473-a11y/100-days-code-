#include <stdio.h>

int main() {
    int a, b, c;
    
    // Input three sides of the triangle
    scanf("%d %d %d", &a, &b, &c);
    
    // Classify triangle based on sides
    if (a == b && b == c) {
        printf("Equilateral\n");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }
    
    return 0;
}
