#include <stdio.h>

int main() {
    int number, result;
    scanf("%d", &number);

    result = ~number;  // Bitwise NOT to flip all bits

    printf("%d\n", result);

    return 0;
}