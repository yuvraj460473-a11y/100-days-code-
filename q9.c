#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    
    // Input principal, rate of interest, and time period
    scanf("%lf %lf %lf", &principal, &rate, &time);
    
    // Simple Interest formula: (P * R * T) / 100
    double simple_interest = (principal * rate * time) / 100.0;
    
    // Compound Interest formula: P * (1 + R/100)^T - P
    double compound_interest = principal * pow((1 + rate / 100.0), time) - principal;
    
    // Output formatted to match sample test cases
    printf("Simple Interest=%.0f, Compound Interest=%.2f\n", simple_interest, compound_interest);
    
    return 0;
}
