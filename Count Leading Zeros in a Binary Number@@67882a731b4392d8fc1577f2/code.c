#include <stdio.h>

int main() {
    unsigned int number;
    int count = 0;
    
    
    scanf("%u", &number);

    if (number == 0) {
        // Special case: all bits are zero
        count = 32;
    } else {
        // Iterate from the highest bit to the lowest
        for (int i = 31; i >= 0; i--) {
            if ((number >> i) & 1) {
                break;  // First '1' found
            }
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}