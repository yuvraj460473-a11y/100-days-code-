#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    // Input temperature in Celsius
    scanf("%f", &celsius);
    
    // Formula: (Celsius * 9/5) + 32
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    
    // Output formatted without decimal places as per test cases
    printf("Fahrenheit=%.0f\n", fahrenheit);
    
    return 0;
}
