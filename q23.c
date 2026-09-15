#include <stdio.h>

int main() {
    int days;
    
    // Input number of late days
    scanf("%d", &days);
    
    if (days <= 0) {
        printf("Fine ₹0\n");
    } else if (days <= 5) {
        printf("Fine ₹%d\n", days * 2);
    } else if (days <= 10) {
        // First 5 days @ 2 + remaining days @ 4
        int fine = (5 * 2) + (days - 5) * 4;
        printf("Fine ₹%d\n", fine);
    } else if (days <= 30) {
        // First 5 days @ 2 + next 5 days @ 4 + remaining days @ 6
        int fine = (5 * 2) + (5 * 4) + (days - 10) * 6;
        printf("Fine ₹%d\n", fine);
    } else {
        printf("Membership Cancelled\n");
    }
    
    return 0;
}
