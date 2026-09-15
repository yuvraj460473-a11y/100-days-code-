#include <stdio.h>

int main() {
    int total_seconds;
    int hours, minutes, seconds;
    
    // Input time in total seconds
    scanf("%d", &total_seconds);
    
    // Convert to hours, minutes, and seconds
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;
    
    // Output in H:M:S format as per sample test cases
    printf("%d:%d:%d\n", hours, minutes, seconds);
    
    return 0;
}
