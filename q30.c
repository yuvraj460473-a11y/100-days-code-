#include <stdio.h>

int main() {
    int n, reversed = 0;

    if (scanf("%d", &n) != 1) {
        return 0;
    }

    int temp = n;
    while (temp != 0) {
        int remainder = temp % 10;
        reversed = reversed * 10 + remainder;
        temp /= 10;
    }

    printf("%d\n", reversed);

    return 0;
}
