#include <stdio.h>

int main() {
    int length, breadth;
    
    // Input length and breadth
    scanf("%d %d", &length, &breadth);
    
    // Calculate area and perimeter
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    
    // Output the result
    printf("Area=%d, Perimeter=%d\n", area, perimeter);
    
    return 0;
}
