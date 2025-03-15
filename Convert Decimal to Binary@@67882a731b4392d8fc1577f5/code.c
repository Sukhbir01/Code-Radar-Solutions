#include <stdio.h>

int main() {
    int number;
    int binary[32];  // To store binary digits (for 32-bit integers)
    int i = 0;

    scanf("%d", &number);

    // Handle special case if number is 0
    if (number == 0) {
        printf("0\n");
        return 0;
    }

    // Handle negative numbers
    unsigned int temp = (unsigned int) number;  // Cast to unsigned for proper binary of negative numbers

    // Extract binary digits
    while (temp > 0) {
        binary[i] = temp % 2;
        temp = temp / 2;
        i++;
    }

    // Print binary in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}