#include <stdio.h>

int main() {
    int year;
    
    // Input year
    scanf("%d", &year);
    
    // Leap year condition:
    // Divisible by 400 OR (Divisible by 4 AND NOT divisible by 100)
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("Leap year\n");
    } else {
        printf("Not a leap year\n");
    }
    
    return 0;
}
