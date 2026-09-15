#include <stdio.h>

#define PI 3.14159265358979323846

int main() {
    double radius;
    
    // Input radius
    scanf("%lf", &radius);
    
    // Calculate area and circumference
    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;
    
    // Output formatted to 2 decimal places
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);
    
    return 0;
}
