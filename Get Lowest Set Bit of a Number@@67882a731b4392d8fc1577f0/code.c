#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num == 0) {
        printf("No set bit found (number is 0).\n");
    } else {
        int lowest_set_bit = num & -num;
        printf("Lowest set bit: %d\n", lowest_set_bit);
    }

    return 0;
}