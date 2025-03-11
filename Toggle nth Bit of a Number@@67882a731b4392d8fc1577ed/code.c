#include <stdio.h>

int main() {
    int num, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the bit position to toggle (0-based index): ");
    scanf("%d", &n);
    num = num ^ (1 << n);

    printf("Number after toggling %d-th bit: %d\n", n, num);

    return 0;
}