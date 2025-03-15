#include <stdio.h>

int main() {
    unsigned int number;
    int count = 0;
    scanf("%u", &number);

    if (number == 0) {
        // Special case: all bits are zero, so technically 32 trailing zeros
        count = 32;
    } else {
        // Check bits from LSB until the first '1' is found
        while ((number & 1) == 0) {
            count++;
            number = number >> 1;
        }
    }

    printf("%d\n", count);

    return 0;
}