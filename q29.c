#include <stdio.h>

int main() {
    int n;
    
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    
    // Factorial of negative numbers is not defined
    if (n < 0) {
        return 0;
    }
    
    // 0! = 1, and factorials grow quickly so use unsigned long long
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    
    printf("%llu\n", fact);
    
    return 0;
}
