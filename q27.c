#include <stdio.h>

int main() {
    int n;
    
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    
    // The sum of the first n odd numbers is simply n * n
    long long sum = (long long)n * n;
    
    printf("%lld\n", sum);
    
    return 0;
}
