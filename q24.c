#include <stdio.h>

int main() {
    int units;
    int bill = 0;
    
    // Input units consumed
    scanf("%d", &units);
    
    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        // First 100 @ 5 + remaining @ 7
        bill = (100 * 5) + (units - 100) * 7;
    } else if (units <= 300) {
        // First 100 @ 5 + next 100 @ 7 + remaining @ 10
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    } else {
        // First 100 @ 5 + next 100 @ 7 + next 100 @ 10 + above @ 12
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    }
    
    // Output the bill
    printf("Bill: ₹%d\n", bill);
    
    return 0;
}
