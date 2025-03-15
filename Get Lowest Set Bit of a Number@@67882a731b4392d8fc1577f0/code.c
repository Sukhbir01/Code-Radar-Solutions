#include <stdio.h>

int main() {
    int number, pos = 0;
    scanf("%d", &number);

    if (number == 0) {
        printf("No set bits (number is zero).\n");
        return 0;
    }

    // Loop to find position of lowest set bit
    while ((number & 1) == 0) {
        number = number >> 1;
        pos++;
    }

    printf("%d\n", pos);

    return 0;
}