#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) return 1;
    for (int i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
    return 0;
}
