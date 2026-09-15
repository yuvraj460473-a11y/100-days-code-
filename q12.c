#include <stdio.h>

int main() {
    int num;
    
    // Input an integer
    scanf("%d", &num);
    
    // Check using nested if-else
    if (num >= 0) {
        if (num == 0) {
            printf("Zero\n");
        } else {
            printf("Positive\n");
        }
    } else {
        printf("Negative\n");
    }
    
    return 0;
}
